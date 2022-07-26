#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int sum = 0,max=INT_MIN;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum += x;
        if(max < sum){
            max = sum;
        }

        if(sum < 0){
            sum =0;
        }
    }
    cout<<max;

    return 0;
}