#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void Print(vector<int> v[]){
    int n = v[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Solve(vector<int> v[],int n,vector<int> indig){
    vector<int> job(n,0);
    queue<int> q;
    for(int i=0;i<n;i++){
        if(indig[i] == 0){
            q.push(i);
            job[i] = 1;
        }
    }

    while(!q.empty()){
        int temp = q.front();
        q.pop();
        for(int i=0;i<n;i++){
            if(v[temp][i] == 1){
                indig[i]--;
                if(indig[i] == 0){
                    job[i] = job[temp] + 1;
                    q.push(i);
                }
            }
            
        }
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<i<<" "<<job[i]<<endl;
    }
    

}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> v[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v[i].push_back(0);
        }
    }

    int edge;
    cin>>edge;

    for(int i=0;i<edge;i++){
        int x,y;
        cin>>x>>y;
        v[x][y] = 1;
    }

    vector<int> indig(n,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j] == 1){
                indig[j] += 1;
            }
        }
    }

    Solve(v,n,indig);

    // Print(v);
	
	return 0;
}
