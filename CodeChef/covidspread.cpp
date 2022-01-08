#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long int n,d;
        cin>>n>>d;
        if(d < 11){
            long long int inf = pow(2,d);
            cout<<min(inf,n)<<endl;
        }else{
            if(d < 27){
                long long int inf = 1024*pow(3,d-10);
                cout<<min(inf,n)<<endl;
            }else{
                cout<<n<<endl;
            }
            
        }
    }
	
	return 0;
}
