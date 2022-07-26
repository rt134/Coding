#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <bits/stdc++.h>
using namespace std;

void Union(int arr1[],int n, int arr2[], int m){
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }

    for(int i=0;i<m;i++){
        s.insert(arr2[i]);
    }
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }
}

void Intersection(int arr1[],int n,int arr2[],int m){
    map<int,bool> mp;
    for(int i=0;i<n;i++){
        mp[arr1[i]] = true;
    }

    for(int i=0;i<m;i++){
        if(mp.find(arr2[i]) != mp.end()){
            cout<<arr2[i]<<" ";
        }
    }

}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    cout<<"Intersection : ";
    Intersection(arr1,n,arr2,m);
    cout<<endl<<"Union : ";
    Union(arr1,n,arr2,m);
	
	return 0;
}