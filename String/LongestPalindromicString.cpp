#include<bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include<string>
using namespace std;

string LCS(string s1, string s2,int n,int m){
    int t[m+1][n+1];


    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i == 0 || j == 0){
                t[i][j] = 0;
            }
        }
    }

    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(s1[i-1] == s2[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
            }else{
                t[i][j] = 0;
            }
        }
    }

    string s;

    int k = m,l = n;
    while(k >= 0 && l >= 0){
        if(s1[k] == s2[l]){
            s = s+s1[k];
            k--;
            l--;
        }else{
            if(t[k][l-1] > t[k-1][l]){
                l--;
            }else{
                k--;
            }
        }
    }

    return s;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1,s2;
    cin>>s1;
    s2 = s1;
    reverse(s2.begin(), s2.end());
    // cout<<s1<<" "<<s2<<endl;
    string s = LCS(s1,s2,s1.length(),s1.length());
    cout<<"Returned String : "<<s<<endl;
    return 0;
}