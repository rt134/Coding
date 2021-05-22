#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int isPlaindrome(string S){
    int n = S.size();
    int flag = 1;
    for(int i=0;i<(int)n/2;i++){
        if(S[i] != S[n-i-1]){
            flag = 0;
            break;
        }
    }
    return flag;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n = s.size();
    
    cout<<isPlaindrome(s)<<endl;
	
	return 0;
}

