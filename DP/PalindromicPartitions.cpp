#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int l, int r){
    while (l < r)
    {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
}


int Solve(string s,int l,int r){

    if(l >= r || isPalindrome(s,l,r)){
        return 0;
    }

    int mn=INT_MAX;
    for(int i=l;i<r;i++){
        int t = 1 + Solve(s,l,i,v) + Solve(s,i+1,r);
        mn = min(t,mn);
    }

    return mn;

}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    vector<string> v;

    int x = Solve(s,0,s.length());
    cout<<x;


	return 0;
}
