#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<vector<int>> arr;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        arr.push_back({a,b});
    }

    vector<vector<int>> v;

    int left = arr[0][0];
    int right = arr[0][1];
    for(int i=1;i<n;i++){
        if(arr[i][0] > right){
            v.push_back({left,right});
            left = arr[i][0];
            right = arr[i][1];
        }else{
            right = max(right,arr[i][1]);
        }
    }
    v.push_back({left,right});




    int x = v.size();
    int y = v[0].size();
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}