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


void Solve(string s,int l,int r,vector<string>& v, string& output){

    if(l >= r ){
        v.push_back(output);
        return;
    }
    
    for(int i=l;i<r;i++){
        if(isPalindrome(s,l,i)){
            output+= (string)s.substr(l, i-l+1);
            Solve(s,l,r,v,output);
            output= "";
        }
    }
    

}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s,o="";
    cin>>s;
    vector<string> v;

    Solve(s,0,s.length(),v,o);
	
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


	return 0;
}
