#include <iostream>
#include <cstdlib>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
using namespace std;

class Edge{
    public:
    int src,dest,weight;
};
 

void BellmanFord(vector<Edge*> v, int src,int V,int E){
    cout<<endl<<"Bellman ford"<<endl;
    vector<int> dist(V,INT_MAX);
    dist[src] = 0;
    
    for(int i=0;i<V-1;i++){
        for(int j = 0;j<E;j++){
            if(dist[v[j]->src] + v[j]->weight < dist[v[j]->dest]){
                dist[v[j]->dest] = dist[v[j]->src] + v[j]->weight;
            }
        }
    }

    for(int j = 0;j<E;j++){
        if(dist[v[j]->src] + v[j]->weight < dist[v[j]->dest]){
            cout<<"Negetive cycle detected";
            break;
        }
    }
    cout<<"Answer"<<endl;
    for(int i=0;i<V;i++){
        cout<<dist[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int n;
    cin>>n;
    int edges;
    cin>>edges;
    vector<Edge*> v;
    
    for(int i=0;i<edges;i++){
        int x,y,w;
        cin>>x>>y>>w;
        Edge* e = new Edge;
        e->src = x;
        e->dest = y;
        e->weight = w;
        v.push_back(e);
    }
    BellmanFord(v,0,n,edges);
    return 0;
}