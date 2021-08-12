#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int Solve(int a, int b, int l, int r){

    if(l < 1 || r > 32){
        return -1;
    }

    for(int i=l;i<=r;i++){
        int mask = 1 << (i-1);

        if(a & mask){
            b = b | mask;
        }
    }
    return b;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // cout<<"We will copy set bits from l to r of a into b"<<endl;
    // cout<<"Enter A,B,l,r respectively"<<endl;
    int a,b,l,r;
    cin>>a>>b>>l>>r;
    cout<<"Answer is : "<<Solve(a,b,l,r);
	
	return 0;
}
