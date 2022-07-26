#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void Print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void Solve(vector<vector<int>> v, int i, int j, int x, int y, vector<int> t, vector<vector<int>> vis){

    if(i == x-1 && j == y-1){
        t.push_back(v[i][j]);
        Print(t);
        return;
    }

    if(i > x-1 || j > y-1 || i < 0 || j < 0 ){
        return;
    }

    if(vis[i][j]==1){
        return;
    }

    // cout<<i<<" "<<j<<" "<<endl;
    
    t.push_back(v[i][j]);
    vis[i][j] = 1;
    Solve(v,i+1,j,x,y,t,vis);
    // Solve(v,i-1,j,x,y,t,vis);
    Solve(v,i,j+1,x,y,t,vis);
    // Solve(v,i,j-1,x,y,t,vis);
    vis[i][j] = 0;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    time_t start, end;

    time(&start);

    int m,n;
    cin>>m>>n;
    vector<vector<int>> v;
    vector<vector<int>> vis;

    int tmp = 1;
    
    for(int i=0;i<m;i++){
        vector<int> t;
        vector<int> vi;
        for(int j=0;j<n;j++){
            t.push_back(tmp);
            vi.push_back(0);
            tmp++;
        }
        v.push_back(t);
        vis.push_back(vi);
    }
    
    vector<int> ans;
    Solve(v,0,0,m,n,ans,vis);
    
    time(&end);
    
    double time_taken = double(end - start);
    cout << "Time taken is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;
	
	return 0;
}
