#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

long long int Sum(vector<long long int> v, long long int k){
    long long int s = 0;
    for(long long int i=0;i<k;i++){
        
        for(long long int j=i;j<k;j++){
            set<long long int> st;
            for(long long int x=i;x<=j;x++){
                st.insert(v[x]);
            }
            s += st.size();
        }
    }
    return s;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int N,Q;
    cin>>N>>Q;
    vector<long long int> v;
    for(int i=0;i<N;i++){
        long long int x;
        cin>>x;
        v.push_back(x);
    }
    while(Q--){
        long long int n,x,y,k;
        cin>>n;
        if(n == 1){
            cin>>x>>y;
            v[x] = y;
        }else{
            cin>>k;
            cout<<Sum(v,k)<<endl;
        }

    }
    
	
	return 0;
}
