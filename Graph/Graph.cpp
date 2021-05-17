#include <iostream>
#include <cstdlib>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
int n = 10;
class Graph{
    public:
        vector<int> v[10];

        void Insert(int a, int b){
            v[a].push_back(b);
            v[b].push_back(a);
        }

        void print(){
            for(int i=0;i<10;i++){
                // cout<<v[i]<<"->";
                for(int j=0;j<v[i].size();j++){
                    cout<<v[i][j]<<" ";
                }
                cout<<endl;
            }
        }

};

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int y,z;
    Graph root;
    while(1){
        int x;
        cout<<"Opt"<<endl;
        cin>>x;
        switch(x){
            case 1: cout<<"Insert"<<endl;
                    cin>>z>>y;
                    root.Insert(z,y);
                    break;
            case 2: root.print();
                    break;
            default :
                    break;
        }
    }
    return 0;
	
	return 0;
}
