#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    time_t start, end;
    
    string s;
    cin>>s;

    time(&start);
    
    int c=0,c1=0,count=0;
    for(int i=0;i<s.length();i++){
        if(s[i] == '0'){
            c++;
        }
        if(s[i] == '1'){
            c1++;
        }
        if(c == c1 && c != 0){
            count++;
            c = 0;
            c1 = 0;
        }
        
    }

    time(&end);
    count == 0 ? count = -1: count=count;
    cout<<count<<endl;
    
    double time_taken = double(end - start);
    cout << "Time taken is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;
	
	return 0;
}
