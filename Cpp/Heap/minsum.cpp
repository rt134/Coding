#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;


string add(string x, string y){
    string z;
    int cary = 0;
    int a = x.size();
    int b = y.size();
    while(a>0 and b>0){
        int sum = cary + (x[a-1] - '0') + (y[b-1] - '0');
        int r = sum%10;
        cary = sum/10;
        
        z = to_string(r) + z;
        b--;
        a--;
    }
    
    if(b != 0){
        while(b>0){
            int sum = cary + (y[b-1] - '0');
            int r = sum%10;
            cary = sum/10;
            z = to_string(r) + z;
            b--;
        }
    }

    if(a != 0){
        while(a> 0){
            int sum = cary + (x[a-1] - '0');
            int r = sum%10;
            cary = sum/10;
            z = to_string(r) + z;
            a--;
        }
    }


    if(cary != 0){
        z = to_string(cary) + z;
    }
    
    return z;
}

string solve(int arr[], int n) {
    sort(arr,arr+n);
    string x = "";
    string y = "";
    for(int i=0;i<n;i++){
        if(i%2 == 0){
            x = x + to_string(arr[i]);
        }else{
            y = y + to_string(arr[i]);
        }
    }

    // cout<<x<<" "<<y<<endl;
    
    return add(x,y);
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<solve(arr,n)<<endl;
	
	return 0;
}
