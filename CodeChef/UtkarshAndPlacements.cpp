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

    int t;
    cin>>t;
    while(t--){
        unordered_map<char,int> mp;
        for(int i=0;i<3;i++){
            char x;
            cin>>x;
            mp[x] = i;
        }

        char x,y;
        cin>>x>>y;

        if(mp[x] < mp[y]){
            cout<<x<<endl;
        }else{
            cout<<y<<endl;
        }
    }
	
	return 0;
}
