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

        sort(v,v+n);

        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }
	
	return 0;
}
