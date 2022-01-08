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

    int t;
    cin>>t;
    while(t--){
        int t1,t2,r1,r2;
        cin>>t1>>t2>>r1>>r2;
        double T1 = pow(t1,2);
        double T2 = pow(t2,2);
        double R1 = pow(r1,3);
        double R2 = pow(r2,3);

        if(T1/R1 == T2/R2){
            cout<<endl<<T1<<" "<<R1<<" "<<T2<<" "<<R2<<endl;
            cout<<"YES"<<endl;
        }else{
            cout<<endl<<T1<<" "<<R1<<" "<<T2<<" "<<R2<<endl;
            cout<<"NO"<<endl;
        }
    }
	
	return 0;
}
