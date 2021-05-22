#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;

void Duplicates(string S){
    int n = S.size();
    map<int, int> m;
    for(int i=0;i<n;i++){
        int x = int((char) tolower(S[i]));
        if(m.find(x) == m.end()){
            m[x] = 1;
        }else{
            m[x] += 1;
        }
    }
    for(auto i =m.begin();i!=m.end();++i){
        if(i->second > 1){
            cout<<i->first<<" "<<i->second<<endl;
        }
    }

}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n = s.size();
    Duplicates(s);
	return 0;
}

