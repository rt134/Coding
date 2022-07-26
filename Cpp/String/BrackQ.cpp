#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
 
bool isOk(string s){
	int n = s.length();
	if(n%2 != 0){
		return false;
	}
	vector<char> d;
	for(int i=0;i<n;i++){
		if(s[i] == '('){
			d.push_back('(');
		}
		else{  
            if (d.size() != 0){ 
                d.pop_back();
			}
            else{
                return false;
			}
        } 
    } 
	cout<<endl;
	if(d.empty()){
		return true;
	}
	
	return false;
}
 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
	string st;
	cin>>st;
	int n = st.length();
	int count = 0;
	
	if(isOk(st) == true){	
			count++;
		}
	for(int i=1;i<n;i++){
		char temp = st[0];
		st.erase(0, 1);
		st += temp;
		if(isOk(st) == true){
			count++;
		}
	}
	cout<<count;
	return 0;
}