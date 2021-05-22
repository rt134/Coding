#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

void NobleInt(vector<int> A){
    int n = A.size();
    sort(A,A+n);
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] == A[i + 1])
            continue;
 
        if (A[i] == n - i - 1)
            return A[i];
    }
    if (A[n - 1] == 0)
        return A[n - 1];
    return -1;
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

    NobleInt(v);

	return 0;
}
