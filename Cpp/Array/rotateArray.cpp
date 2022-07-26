#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val = arr[n-1];
    for(int i=0;i<n;i++){
        int temp = arr[i];
        arr[i] = val;
        val = temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
	
	return 0;
}