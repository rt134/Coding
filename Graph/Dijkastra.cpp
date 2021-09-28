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
struct Node{
    int data;
    int weight;
};

int minDist(map<int,int>dist,map<int,bool> in){
    int m = INT_MAX;
    int idx;

    for(auto i:dist){
        if(!in[i.first] && dist[i.first] < m){
            m = dist[i.first];
            idx = i.first;
        }
    }
    return idx;
}

class Graph {
    public:
    map<int,vector<Node*>> v;
    void Insert(int a, int b, int w){
        Node* temp1 = new Node;
        temp1->data = b;
        temp1->weight = w;

        Node* temp2 = new Node;
        temp2->data = a;
        temp2->weight = w;

        if(v.find(a) == v.end()){
            vector<Node*> x;
            x.push_back(temp1);
            v[a] = x;
        }else{
            v[a].push_back(temp1);
        }

        if(v.find(b) == v.end()){
            vector<Node*> x;
            x.push_back(temp2);
            v[b] = x;
        }else{
            v[b].push_back(temp2);
        }
    }

    void Dijkstra(int src){
        map<int,int> dist;
        map<int, bool> in;
        int v = 0;

        for(auto i = v.begin();i!=v.end();++i){
            dist[i.first] = INT_MAX;
            in[i.first] = false;
            i++;
        }
        dist[src] = 0;


        for(int i = 0;i<v-1;i++){
            int u = minDist(dist,in);

            in[u] = true;

            for(auto j:v[u]){
                if(dist[u] + j.weight < dist[j.data]){
                    dist[j.data] = dist[u] + j.weight;
                }
            }
        }

        cout<<"Dijkstra"<<endl;
        for(auto i=0;i<dist.size();i++){
            cout<<dist[i]<<" ";
        }
        cout<<endl;

    }

    void print(){
        for(auto i = v.begin();i!=v.end();++i){
            cout<<i->first<<" : ";
            for(auto j =0;j<i->second.size();j++){
                cout<<"["<<i->second[j]->data<<","<<i->second[j]->weight<<"]"<<" ";
            }
            cout<<endl;
        }
    }
};



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    Graph root;

    for(int i=0;i<n;i++){
        int x,y,w;
        cin>>x>>y>>w;
        root.Insert(x,y,w);
    }
    root.print();
    root.Dijkstra(0);
	
	return 0;

}