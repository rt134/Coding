#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void Solve(vector<vector<int>>& a, int n){
    
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-1-i;j++){

            int temp = a[i][j];
            a[i][j] = a[n-1-j][i];
            a[n-1-j][i] = a[n-1-i][n-1-j];
            a[n-1-i][n-1-j] = a[j][n-i-1];
            a[j][n-1-i] = temp;
        }
    }

}

void Print(vector<vector<int>> v,int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
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
    Print(v,n);

	return 0;
}