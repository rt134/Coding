#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int Solve(vector<int> v, int n){
    int profit[n];
    for(int i=0;i<n;i++){
        profit[i] = 0;
    }

    int max_price = v[n-1];
    for (int i = n - 2; i >= 0; i--) {
        if (v[i] > max_price){ 
            max_price = v[i];
        }
        profit[i] = max(profit[i + 1], max_price - v[i]);
    }
 
    int min_price = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] < min_price)
            min_price = v[i];
 
        profit[i] = max(profit[i - 1], profit[i] + (v[i] - min_price));
    }
    int result = profit[n - 1];
 
 
    return result;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    time_t start, end;

    int n;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }

    time(&start);
    cout<<Solve(v,n)<<endl;
    time(&end);
    
    // double time_taken = double(end - start);
    // cout << "Time taken is : " << fixed << time_taken << setprecision(5);
    // cout << " sec " << endl;
	
	return 0;
}
