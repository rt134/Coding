#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void Solve(vector<vector<int>> v, int n, int m, int xsrc, int ysrc, int xdest, int ydest){

}


void Print(vector<vector<int>> v, int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
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
    // Solve(v,n,m,0,0,1,7);
    time(&end);

    double time_taken = double(end - start);
    cout << "Time taken is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;
	
	return 0;
}
