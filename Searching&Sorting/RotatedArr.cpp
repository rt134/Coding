#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int search(vector<int> nums, int target) {
        int index = -1;
        for(int i=0;i<nums.size();i++){
            if(target == nums[i]){
                index = i;
                break;
            }
        }
        return index;
    }


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        v.push_back(y);
    }

    int f = search(v,x);
    cout<<f;
	return 0;
}
