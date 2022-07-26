#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;



int Partition(vector<int> a,int n){
    int cnt[n] = {0}, s = 0;
    for (int i = 0 ; i < n ; i++)
    {
        s += a[i];
    }
 
    if (s % 3 != 0)
        return 0;
        
    s /= 3;
     
    int ss = 0;
     
    for (int i = n-1; i >= 0 ; i--)
    {
        ss += a[i];
        if (ss == s)
            cnt[i] = 1;
    }
     
    for (int i = n-2 ; i >= 0 ; i--)
        cnt[i] += cnt[i + 1];
     
    int ans = 0;
    ss = 0;
     
    for (int i = 0 ; i+2 < n ; i++)
    {
        ss += a[i];
        if (ss == s)
            ans += cnt[i + 2];
    }
    return ans;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<Partition(v,n)<<endl;

	
	return 0;
}
