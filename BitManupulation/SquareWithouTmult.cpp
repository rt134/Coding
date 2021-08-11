#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int Square(int n){
    if(n == 0 || n == 1){
        return n;
    }
    // Floor of n/2
    int x = n >> 1;

    if(n & 1){ //if n is odd
        return (Square(x)<<2) + (x << 2) + 1;
    }else{
        return (Square(x)<<2);
    }
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    cout<<"Square of "<<n<<" is : "<<Square(n)<<endl;
	return 0;
}
