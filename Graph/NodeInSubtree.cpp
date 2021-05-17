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

        int* DFS(int root){
            arr[n]
        }

        void print(){
            for(int i=0;i<10;i++){
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
    int q;
	cin>>n>>q;
    Graph root;
	
	return 0;
}
