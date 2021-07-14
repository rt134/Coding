#include <bits/stdc++.h>
using namespace std;

int BinarySearchF(int arr[], int target, int n){
    int l = 0,r = n-1,mid,first=-1;
    
    while(l <= r){
        mid = ((r+l)/2);
        if(arr[mid] == target){
            first = mid;
            r = mid - 1;
        }else{
            if(arr[mid] > target){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
    }
    return first;
}


int BinarySearchL(int arr[], int target, int n){
    int l = 0,r = n-1,mid,end=-1;
    
    while(l <= r){
        mid = ((r+l)/2);
        if(arr[mid] == target){
            end = mid;
            l = mid + 1;
        }else{
            if(arr[mid] > target){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
    }
    return end;
}



vector<int> FL(int arr[], int n, int x){
    int start = BinarySearchF(arr,x,n);
    int end = BinarySearchL(arr,x,n);

    vector<int> v;
    v.push_back(start);
    v.push_back(end);
    return v;

}



int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> v = FL(arr,n,x);
    cout<<"Start "<<v[0]<<" End "<<v[1];
	return 0;
}
