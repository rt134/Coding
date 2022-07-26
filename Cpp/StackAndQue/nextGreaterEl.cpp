#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void Print(vector<int> v){
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    stack<int> s;
    vector<int> ans(n,-1);

    for(int i=n-1;i>=0;i--){
        cout<<i<<" ";
        while(!s.empty() and s.top() <= v[i]){
            s.pop();
        }
        if(!s.empty()){
            ans[i] = s.top();
        }
        s.push(v[i]);
    }
    Print(ans);
	
	return 0;
}
