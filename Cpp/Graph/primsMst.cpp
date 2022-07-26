#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Edge{
    public:
    int src,dest,weight;
};

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



void Solve(vector<vector<int>> v,int src){
    int n = v.size();
    priority_queue<Edge*, vector<Edge*>, CompareWeight> pq;
    
    for(int i=0;i<n;i++){
        if(v[src][i] != 0){
            Edge *t = new Edge;
            t->src = src;
            t->dest = i;
            t->weight = v[src][i];
            pq.push(t);
        }
    }
    
    vector<Edge*> mst;
    vector<int> s(n,0);
    s[src] = 1;

    while(!pq.empty()){
        Edge* e = pq.top();
        pq.pop();

        if(!s[e->dest]){
            int x = e->dest;
            for(int i=0;i<n;i++){
                if(v[x][i] != 0 and !s[i]){
                    Edge *t = new Edge;
                    t->src = x;
                    t->dest = i;
                    t->weight = v[x][i];
                    pq.push(t);
                }
            }
            s[e->dest] =1;
            mst.push_back(e);
        }
        
    }


    cout<<"MST final is"<<endl;
    Print(mst);

}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> v;
    int edges;
    cin>>edges;

    for (int i = 0; i < n; i++)
    {
        vector<int> t(n,0);
        v.push_back(t);
    }

    
    for(int i=0;i<edges;i++){
        int x,y,w;
        cin>>x>>y>>w;
        v[x][y] = w;
        v[y][x] = w;
    }
    Solve(v,0);

}


// 9
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