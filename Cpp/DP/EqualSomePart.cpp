#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


// Top Down
int tKp(int v[],int w, int n){
    int t[n+1][w+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<w+1;j++){
            if(i == 0){
                t[i][j] = 0;
            }
            if(j == 0){
                t[i][j] = 1;
            }
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<w+1;j++){
            if(j >= v[i-1]){
                t[i][j] = (t[i-1][j-v[i-1]]) || (t[i-1][j]);
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
    int n;
    cin>>n;
    int v[n],sum=0;

    for(int i=0;i<n;i++){
        cin>>v[i];
        sum += v[i];
    }

    if(sum %2 == 0){
        int w = sum/2;
        (tKp(v,w,n)) ? cout<<"Yes"<<endl : cout<<"No"<<endl; 
    }else{
        cout<<"No"<<endl;
    }
	
	return 0;
}