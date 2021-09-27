#include <iostream>
#include <cstdlib>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
using namespace std;

class Graph {
    public:
    unordered_map<int,vector<int>> v;

    void Insert(int a, int b){
        if(v.find(a) == v.end()){
            vector<int> x;
            x.push_back(b);
            v[a] = x;
        }else{
            v[a].push_back(b);
        }

        if(v.find(b) == v.end()){
            vector<int> x;
            x.push_back(a);
            v[b] = x;
        }else{
            v[b].push_back(a);
        }
    }

    void print(){
        for(auto i = v.begin();i!=v.end();++i){
            cout<<i->first<<" : ";
            for(auto j =0;j<i->second.size();j++){
                cout<<i->second[j]<<" ";
            }
            cout<<endl;
        }
    }
};



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    Graph root;

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        root.Insert(x,y);
    }
    root.print();
	
	return 0;

}