#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int UnboundKp(int wt[],int v[],int n, int W){
    int t[n+1][W+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<W+1;j++){
            if(i == 0 || j == 0){
                t[i][j] = 0;
            }else{
                if(j >= wt[i-1]){
                    t[i][j] = max((v[i-1] + t[i][j-wt[i-1]]), (t[i-1][j]));
                }else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
    }
    return t[n][W];
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n,W;
    cin>>n>>W;
    int wt[n],v[n];
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        cin>>wt[i];
    }

    cout<<"Unboutnd KP : "<<UnboundKp(wt,v,n,W)<<endl;

	return 0;
}
