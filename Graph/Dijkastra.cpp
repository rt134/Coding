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
struct Node{
    int data;
    int weight;
};

class Graph {
    public:
    unordered_map<int,vector<Node*>> v;
    unordered_map<int,int> apsp;
    void Insert(int a, int b, int w){
        Node* temp1 = new Node;
        temp1->data = b;
        temp1->weight = w;

        Node* temp2 = new Node;
        temp2->data = a;
        temp2->weight = w;

        if(v.find(a) == v.end()){
            vector<Node*> x;
            x.push_back(temp1);
            v[a] = x;
        }else{
            v[a].push_back(temp1);
        }

        if(v.find(b) == v.end()){
            vector<Node*> x;
            x.push_back(temp2);
            v[b] = x;
        }else{
            v[b].push_back(temp2);
        }
    }

    void SortestPath(int src){
        apsp[src] = 0;
        set<Node*> s;
        Node t = new Node;
        t->data = src;
        t->weight = 0;
        s.push_back(t);

        while(!s.empty()){
            auto it = *(s.begin());
            

        }
    }

    void print(){
        for(auto i = v.begin();i!=v.end();++i){
            cout<<i->first<<" : ";
            apsp[i->first] = 99999999;
            for(auto j =0;j<i->second.size();j++){
                cout<<"["<<i->second[j]->data<<","<<i->second[j]->weight<<"]"<<" ";
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
        int x,y,w;
        cin>>x>>y>>w;
        root.Insert(x,y,w);
    }
    root.print();
	
	return 0;

}