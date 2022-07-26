#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

void rearrange(vector<int> a, int n){
    int j = 0;
    for(int i=0;i<n;i++){
        if(a[i] < 0){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
        
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    rearrange(v,n);
	
	return 0;
}
