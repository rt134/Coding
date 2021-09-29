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

void Print(vector<vector<int>> v,int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;        
    }
}

int minDistance(vector<int> dist, vector<int> sptSet)
{
   
    int min = INT_MAX, min_index;
 
    for (int v = 0; v < dist.size(); v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
 
    return min_index;
}
 
void Dijkstra(vector<vector<int>> v, int src){
    cout<<endl<<"Dijkstra Algorithm"<<endl;
    int n = v.size();
    vector<int> visited(n,0);
    vector<int> dist(n,INT_MAX);
    dist[src] = 0;
    
    for(int i=0;i<n-1;i++){
        int u = minDistance(dist,visited);
        visited[u] = 1;
        for(int j = 0;j<n;j++){
            if(v[u][j] != 0 and !visited[j] and dist[u] + v[u][j] < dist[j]){
                dist[j] = dist[u] + v[u][j];
            }
        }

    }
    cout<<"Answer"<<endl;
    for(int i=0;i<n;i++){
        cout<<dist[i]<<" ";
    }
    cout<<endl;
}


int main(){

    int n;
    cin>>n;
    vector<vector<int>> v;
    int edges;
    cin>>edges;

    for (int i = 0; i < n; i++)
    {
        vector<int> t(n,0);
        v.push_back(t);
    }

    
    for(int i=0;i<edges;i++){
        int x,y,w;
        cin>>x>>y>>w;
        v[x][y] = w;
        v[y][x] = w;
    }
    Print(v,n);
    Dijkstra(v,0);

}