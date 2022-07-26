#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void Solve(vector<vector<string>> v,int k, string s){
    if(k == v.size()-1){
        for (int i = 0; i < v[k].size(); i++)
        {
            cout<<s<<" "<<v[k][i]<<endl;
        }
        return;
    }
    for(int i=0;i<v[k].size();i++){
        if(s == ""){
            Solve(v,k+1,s+v[k][i]);
        }else{
            Solve(v,k+1,s+" "+v[k][i]);
        }
        
    }
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<vector<string>> v;

    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        vector<string> t;
        for(int j=0;j<m;j++){
            string s;
            cin>>s;
            t.push_back(s);
        }
        v.push_back(t);
    }

    string s="";
    Solve(v,0,s);

	
	return 0;
}


// 3
// 2
// You We    
// 2
// have are
// 3
// sleep eat drink