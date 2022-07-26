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

class Graph{
    public:
        map<int, vector<int>> v;
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
                v[b] = x;
            }
        }
        
        void TopologicalSort(){
            unordered_map<int,int> m;

            for(auto i : v){
                m[i.first] = 0;
                for(int j=0;j<i.second.size();j++){
                    if(m.find(i.second[j]) == m.end()){
                        m[i.second[j]] = 1;
                    }else{
                        m[i.second[j]]++;
                    }
                }
            }

            queue<int> q;
            for(auto i: m){
                if(i.second == 0){
                    q.push(i.first);
                }
            }

            vector<int> ans;
            while(!q.empty()){
                int t = q.front();
                q.pop();
                ans.push_back(t);
                for(auto i : v[t]){
                    m[i]--;
                    if(m[i] == 0){
                        q.push(i);
                    }
                }
            }

            cout<<"Topological Sort"<<endl;
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;

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

int main() {
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
    root.TopologicalSort();
	return 0;
}
