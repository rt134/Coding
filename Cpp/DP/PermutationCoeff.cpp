#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int nPr(int n, int r){
    int factorial[n+1];
    factorial[0] = 1;
    for(int i=1;i<n+1;i++){
        factorial[i] = factorial[i-1]*i;
        
    }
    
    return int(factorial[n]/(factorial[n-r]));
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    cout<<nPr(n,k);

	
	return 0;
}
