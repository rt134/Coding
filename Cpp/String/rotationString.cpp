#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1,s2,temp;
    cin>>s1>>s2;

    temp = s1 + s1;
    if(temp.find(s2) != string::npos && s1.length() == s2.length()){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}