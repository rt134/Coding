#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int n;
        
        cin>>n;
        long long int v[n];

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int l = 0,r = n-1;
        int scount = v[0];
        int ecount = v[n-1];
        while(l < r){
            
        }
        cout<<abs(scount-ecount)<<endl;

    }
	
	return 0;
}
