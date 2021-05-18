#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main()  {
    set<int> s;
    int q;
    cin>>q;
    while(q--){
        int y,x;
        cin>>y>>x;
        if(y == 1){
            s.insert(x);
        }
        else if(y == 2){
            auto it = s.find(x);
            if(it != s.end())
                s.erase(it);
        }
        else{
            if(s.find(x) != s.end()){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}