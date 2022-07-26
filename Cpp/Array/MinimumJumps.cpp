#include<bits/stdc++.h>
using namespace std;

int MinSteps(int arr[],int n){
    int MaxRange = arr[0];
    int jumps = 1;
    int steps = arr[0];

    if(n ==1){
        return 0;
    }else if(arr[0] < 1){
        return -1;
    }else{
        for(int i=1;i<n;i++){
            if(i == n-1){
                return jumps;
            }
            MaxRange = max(arr[i]+i, MaxRange);
            steps--;
            if(steps == 0){
                jumps++;
                if(MaxRange <= i){
                    return -1;
                }
                steps = MaxRange - i;
            }
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Minimum Steps : "<<MinSteps(arr,n);

    return 0;
}