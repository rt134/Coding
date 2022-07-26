#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<int> AddOne(vector<int> a){

    int n = a.size();
  
    // Add 1 to last digit and find carry
    a[n-1] += 1;
    int carry = a[n-1]/10;
    a[n-1] = a[n-1] % 10;
  
    // Traverse from second last digit
    for (int i=n-2; i>=0; i--)
    {
        if (carry == 1)
        {
           a[i] += 1;
           carry = a[i]/10;
           a[i] = a[i] % 10;
        }
    }
  
    // If carry is 1, we need to add
    // a 1 at the beginning of vector
    if (carry == 1)
      a.insert(a.begin(), 1);

    // int n = v.size();
    // int ans,cary = 1; 
    // for(int i=0;i<n;i++){
    //     ans = v[i] + cary;
    //     v[i] = ans%10;
    //     cary = (int)(ans/10);
    // }
    // while(cary > 0){
    //     int x = cary%10;
    //     cary = cary/10;
    //     v.push_back(x);
    // }
    bool z = true;
    int i = 0;
    while(z){
        if(a[i] > 0){
            z = false;
        }else{
            a.erase(a.begin());
        }
    }
    return a;
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
	vector<int> max = AddOne(v);
    for(int i=0;i<max.size();i++){
        cout<<max[i]<<" ";
    }

	return 0;
}
