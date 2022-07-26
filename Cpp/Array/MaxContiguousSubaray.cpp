#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int MaxSum(int n,vector<int> v){
    int max=INT_MIN ,cur=0;

    for(int i=0;i<n;i++){
        cur += v[i];
        if(max < cur){
            max = cur;
        }

        if(cur < 0){
            cur = 0;
        }
    }

    return max;
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
	int max = MaxSum(n,v);
    cout<<max<<endl;

	return 0;
}
