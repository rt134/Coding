#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// Recursive
int Kp(int wt[], int v[], int w, int n){
    if(w == 0 || n == 0){
        return 0;
    }
    if(wt[n-1] <= w ){
        return max((v[n-1]+Kp(wt,v,w-wt[n-1],n-1)),Kp(wt,v,w,n-1));
    }
    return Kp(wt,v,w,n-1);
}

// Top Down
int tKp(int wt[],int v[],int w, int n){
    int t[n+1][w+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<w+1;j++){
            if(j == 0 || i == 0){
                t[i][j] = 0;
            }
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<w+1;j++){
            if(wt[i-1] <= j ){
                t[i][j] = max((v[i-1]+t[i-1][j-wt[i-1]]),t[i-1][j]);
            }else{
                t[i][j] = t[i-1][j];
            }
        }

    }
    return t[n][w];
}



int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,w;
    cin>>n>>w;
    int wt[n],v[n];
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    cout<<"Recursive "<<Kp(wt,v,w,n)<<endl;
    cout<<"Top down "<<tKp(wt,v,w,n)<<endl;

	
	return 0;
}