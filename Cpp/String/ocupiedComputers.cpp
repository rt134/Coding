#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int Solve(string s, int n){
    vector<int> v(26,0);
    int count=0,total=0;
    
    for(int i=0;i<s.size();i++){
        int idx = s[i] - 'A';
        if(v[idx] == 0){
            v[idx] = 1;
            total++;
        }
        else{
            v[idx] = 0;
            total--;
        }

        
        if(total > n){
            // cout<<s[i]<<" "<<i<<" "<<total<<endl;
            i++;
            count++;
            v[idx] = 0;
            total--;
        }
    }

    return count;
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<Solve(s,n)<<endl;
	return 0;
}
