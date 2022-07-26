#include<bits/stdc++.h>
using namespace std;


int search(vector<int>& arr, int key) {
    int n = arr.size();
    int low =0;
    int high = n-1;
    
    while(low<=high){
        
        int mid = low + (high-low)/2;
        
        if(arr[mid]==key)
            return mid;
        
        if(arr[mid]>=arr[low]){
            
            if(key>=arr[low] && key<=arr[mid])
                high = mid-1;
            else
                low = mid+1;
        }
        else{
            
            if(key>arr[mid] && key<arr[low])
                low = mid+1;
            else
                high = mid-1;
        }
        
        
    }
    return -1;
}

int min(){
    vector<int> v;
    int n,k;
    cin>>n>>k;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    count<<search(v,k);
    return 0;
}