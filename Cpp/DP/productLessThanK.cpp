#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int Solve(int a[], int n, int k){
    int t[n+1][k+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<k+1;j++){
            t[i][j] = 0;
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<k+1;j++){
            t[i][j] = t[i-1][j];

            if(a[i-1] <= j && a[i-1] > 0){
                t[i][j] += t[i-1][j/a[i-1]] + 1;
            }
        }
    }

    return t[n][k];
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // n = size of arr, find product less than k
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Ans is : "<<Solve(arr,n,k)<<endl;
	
	return 0;
}
