#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int k;
    bool flag = false;
    cin>>k;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(k == a[i][j]){
                flag = true;
                break;
            }
        }
    }
	
    if(flag){
        cout<<"Found";
    }else{
        cout<<"Not Found";
    }


	return 0;
}
