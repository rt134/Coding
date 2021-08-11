#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int TargetSum(int arr[],int n,int w){
    int t[n+1][w+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<w+1;j++){
            if(j == 0){
                t[i][j] == 0;
            }
            if(i == 0){
                t[i][j] = 1;
            }

        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<w+1;j++){
            
            if(j >= arr[i-1]){
                t[i][j] = t[i][j-arr[i-1]] + t[i-1][j];
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

    // It is to calculate number of subsets 
    // with given difference d present in arr
    int n,d,s=0;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s += arr[i];
    }

    // sum(s1) - sum(s2) = diff
    // sum(s1) + sum(s2) = sum(Arr)
    // by these statements : 
    // sum(s1) = (sum(Arr) + diff)/2

    int w = (s+d)/2;

    cout<<TargetSum(arr,n,w)<<endl;
	
	return 0;
}
