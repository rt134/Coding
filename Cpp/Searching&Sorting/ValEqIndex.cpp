#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

vector<int> find(vector<int> arr, int n){
    vector<int> r;
    for(int i=0;i<n;i++){
        if(i+1 == arr[i]){
            r.push_back(i+1);
        }
    }
    return r;
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        v.push_back(y);
    }

    vector<int> f = find(v,n);
    for(int i=0;i<f.size();i++){
        cout<<f[i]<<" ";
    }
	

	return 0;
}
