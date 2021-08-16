#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void Rotate(vector<int>& v,int n, int l,int r){
    int a = v[r];
    for(int i=r;i > l;i--){
        v[i] = v[i-1];
    }
    v[l] = a;
}

void Solve(vector<int>& v, int n){

    for(int i=0;i<n;i++){
        if(i%2 == 0 and v[i] >= 0){
            for(int j=i+1;j<n;j++){
                if(v[j] < 0){
                    // cout<<"C1"<<" rotating "<<i<<" to "<<j<<endl;
                    Rotate(v,n,i,j);
                    break;
                }
            }
        }else if(i%2==1 and v[i] < 0){
            for(int j=i+1;j<n;j++){
                if(v[j] > 0){
                    // cout<<"C2"<<" rotating "<<i<<" to "<<j<<endl;
                    Rotate(v,n,i,j);
                    break;
                }
            }
        }
    }


    for(int i=0;i<n;i++){
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

    Solve(v,n);
	
	return 0;
}
