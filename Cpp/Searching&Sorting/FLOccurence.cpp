#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

vector<int> find(vector<int> arr, int n , int x ){
    int f = -1;
    int l = -1;
    for(int i=0;i<n;i++){
        if(x == arr[i]){
            if(f == -1){
                f = i;
            }
            l = i;
        }
    }
    vector<int> r;
    r.push_back(f);
    r.push_back(l);
    return r;
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        v.push_back(y);
    }

    vector<int> f = find(v,n,x);
	cout<<f[0]<<" "<<f[1]<<endl;

	return 0;
}
