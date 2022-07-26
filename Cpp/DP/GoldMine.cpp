#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int Solve(vector<vector<int>> v,int n,int m){
    
    for(int j=m-2;j>=0;j--){
        for(int i=0;i<n;i++){
            if(i == 0 ){
                v[i][j] += max(v[i][j+1],v[i+1][j+1]);
            }else if(i == n-1){
                v[i][j] += max(v[i][j+1],v[i-1][j+1]);
            }else{
                v[i][j] += max(v[i][j+1], max(v[i-1][j+1], v[i+1][j+1]));
            }
        }
    }


    int mx = v[0][0];
    for(int i=0;i<n;i++){
        if(v[i][0] > mx){
            mx = v[i][0];
        }
    }

    return mx;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;

    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    cout<<Solve(v,n,m);

	return 0;
}