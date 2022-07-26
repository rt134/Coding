#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;


void Print(vector<vector<int>> v, int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}


int Solve(vector<vector<int>> v, int n, int m, int x, int y, int i, int j, int count){
    
    cout<<"Count "<<count<<endl;
    Print(v,n,m);
    if(i == x && y == j){
        return count;
    }

    if (i == x && j == y) {
        return count;
    }
 
    if (x < 0 || x >= n || x < 0 || y >= m || v[x][y] == 0 ) {
        return count;
    }
 

    v[x][y] = 0;

    int ans;
    int mxm = 0;


    ans = Solve(v,n,m,x+1,y,i,j,count+1);
    mxm = max(mxm, ans);
    ans = Solve(v,n,m,x-1,y,i,j,count+1);
    mxm = max(mxm, ans);
    ans = Solve(v,n,m,x,y+1,i,j,count+1);  
    mxm = max(mxm, ans);  
    ans = Solve(v,n,m,x,y-1,i,j,count+1); 
    mxm = max(mxm, ans); 
    
    v[x][y] = 1;

    return mxm;
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    time_t start, end;
    int n,m;
    cin>>n>>m;

    vector<vector<int>> v;

    time(&start);

    for(int i=0;i<n;i++){
        vector<int> x;
        for(int j=0;j<m;j++){
            x.push_back(1);
        }
        v.push_back(x);
    }
    v[1][2] = 0;
    v[1][5] = 0;
    v[1][8] = 0;
    Print(v,n,m);
    cout<<"Longest Path is : "<<Solve(v,n,m,0,0,1,7,0)<<endl;
    time(&end);

    double time_taken = double(end - start);
    cout << "Time taken is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;
	
	return 0;
}
