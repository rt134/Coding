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

    int sum = 0;

    for(int i=0;i<n;i++){
        sum^= arr[i];
    }

    int idx;
    for(int i=0;i<32;i++){
        if(((1<<i)&sum) != 0){
            idx = i;
            break;
        }
    }

    int first=0,second=0;

    int mask = 1<<idx;

    for(int i=0;i<n;i++){
        if((arr[i]&mask) == 0){
            first ^= arr[i];
        }else{
            second ^= arr[i];
        }
    }

    cout<<"First "<<first<<" second "<<second<<endl;
	
	return 0;
}
