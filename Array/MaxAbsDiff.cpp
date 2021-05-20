#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int MaxDiff(vector<int> a){
    int max = INT_MIN;
    int n = a.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int x = abs(a[i] - a[j]) + abs(i - j);
            if(max < x){
                max = x;
            }
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
	int max = MaxDiff(v);
    cout<<max;

	return 0;
}
