#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;


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

    int min = v[0];
    int max = v[0];

    if(n ==1){
        cout<<"Max : "<<max<<endl;
        cout<<"Min : "<<min<<endl;
    }
    else{
        for(int i=1;i<n;i++){
            if(max < v[i]){
                max = v[i];
            }

            if(min > v[i]){
                min = v[i];
            }
        }
        cout<<"Max : "<<max<<endl;
        cout<<"Min : "<<min<<endl;
    }
	
	return 0;
}
