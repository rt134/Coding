#include <bits/stdc++.h>
using namespace std;

int findMinDiff(int arr[], int n,int k){
    sort(arr,arr+n);
    int ans = arr[n-1] - arr[0];

    for(int i=0;i<n;i++){
        if(arr[i+1]<k){
            continue;
        }

        int currMin = min(arr[i+1]-k, arr[0]+k);
        int currMax = max(arr[i+1]+k,arr[n-1]-k);

        ans = min(ans, currMax - currMin);
    }
    return ans;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Min Diff : "<<findMinDiff(arr,n,k)<<endl;

    return 0;
}