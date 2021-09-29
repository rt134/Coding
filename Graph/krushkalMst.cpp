#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Edge{
    public:
    int src,dest,weight;
};

bool isCycle(set<int> s,Edge* e){
    if(s.find(e->src) != s.end() and s.find(e->dest) != s.end()){
        return true;
    }
    return false;
}

struct CompareWeight {
    bool operator()(const Edge* e1, const Edge* e2)
    {
        return e1->weight > e2->weight;
    }
};

void Print(vector<Edge*> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]->src<<" "<<v[i]->dest<<" "<<v[i]->weight<<endl;
    }
    cout<<endl;
}



void Solve(vector<Edge*> v){
    int n = v.size();
    priority_queue<Edge*, vector<Edge*>, CompareWeight> pq;
    for(int i=0;i<n;i++){
        pq.push(v[i]);
    }
    
    vector<Edge*> mst;
    set<int> s;

    for(int i=0;i<n;i++){
        Edge* e = pq.top();
        pq.pop();
        if(!isCycle(s,e)){
            mst.push_back(e);
            s.insert(e->src);
            s.insert(e->dest);
        }
    }

    cout<<"MST final is"<<endl;
    Print(mst);

}

int main(){
    int n;
    cin>>n;
    vector<Edge*> v;
    for(int i=0;i<n;i++){
        int x,y,w;
        cin>>x>>y>>w;
        Edge* temp = new Edge;
        temp->src = x;
        temp->dest = y;
        temp->weight = w;
        v.push_back(temp);
    }
    Solve(v);


}


// 14                       
// 7 6 1
// 8 2 2
// 6 5 2
// 0 1 4
// 2 5 4
// 8 6 6
// 2 3 7
// 7 8 7
// 0 7 8
// 1 2 8
// 3 4 9
// 5 4 10
// 1 7 11
// 3 5 14