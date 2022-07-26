#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

void Merge(int arr1[], int n, int arr2[], int m){
    int j=0,i=n-1;

    while(i >= 0 && j<m){
            
            if(arr1[i] >= arr2[j]){
                swap(arr1[i],arr2[j]);
                i--;
                j++;
            }else{
                break;
            }
        }
        sort(arr2,arr2+m);
        sort(arr1,arr1+n);

    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    Merge(arr1,n,arr2,m);
	
	return 0;
}