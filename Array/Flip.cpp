#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;


vector<int> flip(string A) {
    int n = A.length();
    int ones = 0;
    int zeros = 0;
    int L = INT_MAX, R = 0;
    int ansL = 0, ansR = 0;
    int prev = 0;
    bool found = false;
    
    for (int i = 0; i < n; i++) {
        ones += A[i] == '1';
        zeros += A[i] == '0';
        if (zeros) found = true;
        
        if (ones > zeros) {
            ones = 0;
            zeros = 0;
            L = INT_MAX;
            R = 0;
        } else if (A[i] == '0') {
            L = min(L, i);
            R = i;
            
            if (zeros - ones > prev) {
                ansR = R;
                ansL = L;
                prev = zeros - ones;
            }
        }
    }
    
    vector < int > ans;
    if (found) {
        ans.push_back(ansL + 1);
        ans.push_back(ansR + 1);
    }
    return ans;
}



int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
	cin>>s;
	vector<int> max = flip(s);
    for(int i=0;i<max.size();i++){
        cout<<max[i]<<" ";
    }

	return 0;
}
