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
    string s;
    cin>>s;
    int n = s.size();
    for(int i=0;i<(int)n/2;i++){
        char c = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = c;
    }
    cout<<s<<endl;
	
	return 0;
}
