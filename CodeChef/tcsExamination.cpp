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
        int D[3],S[3];
        cin>>D[0]>>D[1]>>D[2];
        cin>>S[0]>>S[1]>>S[2];
        int St=0,Dt=0;
        St = S[0] + S[1] + S[2];
        Dt = D[0] + D[1] + D[2];

        if(St > Dt){
            cout<<"SLOTH"<<endl;
        }else if(Dt > St){
            cout<<"DRAGON"<<endl;
        }else{

            if(D[0] > S[0]){
                cout<<"DRAGON"<<endl;
            }else if(D[0] < S[0]){
                cout<<"SLOTH"<<endl;
            }else{
                if(D[1] > S[1]){
                    cout<<"DRAGON"<<endl;
                }else if(D[1] < S[1]){
                    cout<<"SLOTH"<<endl;
                }else{
                    cout<<"TIE"<<endl;
                }
            }

        }
    }
       
	
	return 0;
}
