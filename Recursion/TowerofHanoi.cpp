#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;
  

void Print(char s, char d, int n){
    cout<<"Moving plate "<<n<<" from "<<s<<" to "<<d<<endl;
    return;
}

void Solve(char s, char d, char h, int n){
    if(n == 1){
        Print(s,d,n);
        return;
    }

    Solve(s,h,d,n-1);
    Print(s,d,n);
    Solve(h,d,s,n-1);
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    time_t start, end;
    int n;
    cin>>n;
    char s,d,h;
    s = 's';
    d = 'd';
    h = 'h';

    time(&start);
    Solve(s,d,h,n);
    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;
	
	return 0;
}
