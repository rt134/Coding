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

void isBiparatite(vector<vector<int>> v, int n){
    vector<int> c(n,-1);
    queue<int> q;
    q.push(0);
    c[0] = 1;

    while(!q.empty()){
        int x = q.front();
        q.pop();

        if(v[x][x] == 1){
            cout<<"Self Loop"<<endl;
            return;
        }

        for(int i=0;i<n;i++){
            if(v[x][i] != 0 and c[i] == -1){
                c[i] = 1 - c[x];
                q.push(i);
            }else if(c[x] == c[i] and v[x][i]){
                cout<<"Not Biparatite"<<endl;
                return; 
            }
        }
    }
    cout<<"Biparatite"<<endl;

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
        int x,y;
        cin>>x>>y;
        v[x][y] = 1;
        v[y][x] = 1;
    }
    Print(v,n);
    isBiparatite(v,n);

}