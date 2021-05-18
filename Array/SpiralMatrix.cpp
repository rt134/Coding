#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<int> spiralOrder(const vector<vector<int> > &A) {
    vector<int> v;
    int m = A.size();
    int n = A[0].size();
    int i, k = 0, l = 0;

	

	while (k < m && l < n) {
		
		for (i = l; i < n; ++i) {
			v.push_back(A[k][i]);
		}
		k++;

		for (i = k; i < m; ++i) {
			v.push_back(A[i][n - 1]);
		}
		n--;

		if (k < m) {
			for (i = n - 1; i >= l; --i) {
				v.push_back(A[m - 1][i]);
			}
			m--;
		}

		if (l < n) {
			for (i = m - 1; i >= k; --i) {
				v.push_back(A[i][l]);
			}
			l++;
		}
	}
    return v;

}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int> > A={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<int> ans = spiralOrder(A);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
	
	return 0;
}
