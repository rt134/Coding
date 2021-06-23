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
    return 0;
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
    
    cout<<Kp(wt,v,w,n);

	
	return 0;
}