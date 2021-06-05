#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int a;
        cin>>a;
        if(a == 0){
            a = 1;
        }
        cout<<a<<endl;
    }
	
	return 0;
}
