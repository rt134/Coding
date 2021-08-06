#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int watering(int arr[], int n){
    int open=0,min=0,max=0;
    while(max < n){
        for(int i=0;i<n;i++){
            if(i-arr[i] <= min && i+arr[i] > max){
                max = i+arr[i];
            }
        }
        if(max == min){
                return -1;
        }
        open++;
        min = max;
    }
    return open;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Ans : "<<watering(arr,n)<<endl;

	return 0;
}
