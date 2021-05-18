#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector<int> v;
    cin>>n;
    int s = 0;
    int e = n-1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    while(s < e){
        int temp = v[s];
        v[s] = v[e];
        v[e] = temp;
        e--;
        s++;
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

	
	return 0;
}
