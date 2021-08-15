#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void Solve(vector<vector<int>>& a, int n){
    
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[a[0][i]] = 1;
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            if(m[a[i][j]] == i){
                m[a[i][j]] = i+1;
            }
        }
    }

    cout<<"Common elements : ";
    for(auto i:m){
        if(i.second == n-1){
            cout<<i.first<<" ";
        }
    }

}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<vector<int>> v;

    for(int i=0;i<n;i++){
        vector<int> t;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            t.push_back(x);
        }
        v.push_back(t);
    }

    Solve(v,n);

	return 0;
}