#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int minJumps(int arr[], int n){
    int maxr = arr[0];
        int jump = 1;
        int step = arr[0];
        if (arr[0] == 0)return -1;
        else if (n == 1)
            return 0;
        else {
            for (int i = 1; i < n; i++) {
                if (i == n - 1) {
                    return jump;
                }
                maxr = max(arr[i] + i, maxr); // keep on updating range
                step--;
                if (step == 0) {
                    jump++;
                    if (maxr <= i) //can't go further
                        return -1;
                step = maxr - i; //step count
                  }
            }
        }
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
	cout<<minJumps(arr,n);
	return 0;
}


