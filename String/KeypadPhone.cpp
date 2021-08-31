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

    string str[] = {"2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
                   };
 
    string input;
    cin>>input;

    string output="";

    for(int i=0;i<input.length();i++){
        int index = input[i] - 'a';
        output += str[index];
        // cout<<str[index]<<" ";
    }

    cout<<output<<endl;
	
	return 0;
}
