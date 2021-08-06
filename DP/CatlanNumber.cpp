#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int CatlanNo(int n){
    int t[n+1];
    t[0] = 1;
    t[1] = 1;
    for (int i = 2; i < n+1; i++)
    {
        t[i] = 0;
        for(int j = 0; j<i;j++){
            t[i] += t[j] * t[i - j - 1];
        }
    }
    return t[n];    
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    cout<<CatlanNo(n)<<endl;
	
	return 0;
}
