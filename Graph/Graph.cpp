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
                x.push_back(a);
                v[b] = x;
            }else{
                v[b].push_back(a);
            }
        }
        
        void DFS(int src,int dest){
            stack<int> stack;
            bool flag = false;
            map<int, bool> visited;
            for(auto i=v.begin();i!=v.end();i++){
                visited[i->first] = false;
            }

            stack.push(src);

            while(!stack.empty()){
                int p = stack.top();
                stack.pop();
                visited[p] = true;

                if(p == dest){
                    cout<<"Found Route to destination";
                    break;
                }
                
                for(auto i=0;i<v[p].size();i++){
                    int x = v[p][i];
                    if(!visited[x]){
                        stack.push(x);
                    }
                }
            }
            if(flag){
                cout<<"Found Route"<<endl;
            }else{
                cout<<"Can't Find Route"<<endl;
            }
        }

        void BFS(int src,int dest){
            bool flag = false;
            queue<int> q;
            map<int, bool> visited;
            for(auto i=v.begin();i!=v.end();i++){
                visited[i->first] = false;
            }

            q.push(src);

            while(!q.empty()){
                int p = q.front();
                q.pop();
                visited[p] = true;

                if(p == dest){
                    flag = true;
                    break;
                }
                
                for(auto i=0;i<v[p].size();i++){
                    int x = v[p][i];
                    if(!visited[x]){
                        q.push(x);
                    }
                }
            }
            if(flag){
                cout<<"Found Route"<<endl;
            }else{
                cout<<"Can't Find Route"<<endl;
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
    int src,dest;
    cin>>src>>dest;
    root.DFS(src,dest);
    root.BFS(src,dest);
	
	return 0;
}
