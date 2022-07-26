#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

long long Solve(long long l, long long r){
    long long div = r;
    long long x = r/2;
    if(x+1 >= l){
        return r%(x+1);
    }

    return r%l;
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        cout<<Solve(l,r)<<endl;
    }
	
	return 0;
}
