#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int CoinChange(int wt[],int n, int W){
    int t[n+1][W+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<W+1;j++){

            
            t[i][j] = 0;

            if(j == 0){
                t[i][j] = 1;
            }
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<W+1;j++){
            if(j >= wt[i-1]){
                cout<<i<<j<<wt[i-1]<<endl;
                t[i][j] = t[i][j-wt[i-1]] + t[i-1][j];
            }else{
                t[i][j] = t[i-1][j];
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
    int coin[n];

    for(int i=0;i<n;i++){
        cin>>coin[i];
    }

    cout<<"CoinChange ways : "<<CoinChange(coin,n,W)<<endl;

	return 0;
}
