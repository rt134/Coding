#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void Print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

void Reverse(stack<int>& s){
    if(s.empty()){
        return;
    }

    int x = s.top();
    s.pop();
    Reverse(s);
    s.push(x);
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    stack<int> s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }  
    

    Reverse(s);
    Print(s);
	
	return 0;
}
