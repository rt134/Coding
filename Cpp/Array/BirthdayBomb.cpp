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
        long long int n,y;

        cin>>n>>y;
        
        long long int v[n];

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        if(n < y){
            cout<<0<<endl;
        }else{
            long long int count = 0,x = y;
            for(int i=0;i<n;i++){
                if(v[i] == x){
                    x--;
                    if(x == 0){
                        count++;
                        x = y;
                    }
                }else{
                    if(x != y && x > 0){
                        x = y;

                    }else if(x == 0){
                        count++;
                        x = y;
                        
                    }

                }
            }
            cout<<count<<endl;
        }

    }
	
	return 0;
}
