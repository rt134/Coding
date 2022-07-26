#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void Solve(string s,string st,vector<string>& v){
    if(s.empty()){
        v.push_back(st);
        return;
    }

    Solve(s.substr(1),st+s[0],v);
    Solve(s.substr(1),st,v);
}



int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,st;
    cin>>s;
    vector<string> v;
    Solve(s,st,v);

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

	return 0;
}
