#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n,m;
	cin>>n;
	int a[n];
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	int c[m];
	map<int, bool> mp; 
	for(int i=0;i<m;i++){
		cin>>c[i];
		mp.insert({c[i], true});

	}
	
	for(int i=1;i<101;i++){
		bool inc = true;
		for(int j=0;j<n;j++){
			int y = a[j] + i;
            map<int, bool>::iterator itr;
            itr = mp.find(y);
            if(itr == mp.end()){
                inc = false;
            }

        }
        if(inc){
            v.push_back(i);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

	return 0;
}
