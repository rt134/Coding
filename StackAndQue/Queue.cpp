#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Que{
    int arr[100];
    int front = 0;
    int back = 0;
    public:
    void Push(int x){
        arr[back++] = x;
    }

    int Pop(){
        return arr[front++];
    }

    int size(){
        return back-front;
    }

    int Front(){
        return arr[front];
    }

};


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Que x;
    x.Push(10);
    x.Push(30);
    x.Push(20);
    x.Push(40);

    cout<<x.Pop()<<endl;
    cout<<x.Pop()<<endl;
    cout<<x.size()<<endl;
    cout<<x.Front()<<endl;
	return 0;
}
