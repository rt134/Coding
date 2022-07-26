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

vector<int> TopologicalSort(vector<vector<int>> v,int n){
    map<int,int> m;

    for(int i=0;i<n;i++){
        m[i] = 0;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j] != 0){
                m[j] += 1;
            }
        }
    }
    queue<int> q;
    for(int i=0;i<n;i++){
        if(m[i] == 0){
            q.push(i);
        }
    }

    vector<int> ans;

    while(!q.empty()){
        int x = q.front();
        q.pop();
        ans.push_back(x);

        for(int i=0;i<n;i++){
            if(v[x][i] != 0){
                m[i] -= 1;
                if(m[i] == 0){
                    q.push(i);
                }
            }
        }
    }

    return ans;
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
    }
    Print(v,n);
    cout<<"Topological Sort"<<endl;
    vector<int> ans = TopologicalSort(v,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}