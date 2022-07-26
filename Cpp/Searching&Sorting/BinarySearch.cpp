#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int binsearch(int *arr,int t, int s, int e){
    while(s < e){
        int m = (s+e)/2;
        if(arr[m] > t){
            e = m;
        }else if(arr[m] < t){
            s = m;
        }else{
            return m+1;
        }
    }
    return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int n,q,q1;
	cin>>n;
    int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
    cin>>q;
	for(int i=0;i<q;i++){
		cin>>q1;
        cout<<binsearch(a,q1,0,n-1)<<endl;
	}

	
	return 0;
}
