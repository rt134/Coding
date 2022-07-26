#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Stack {
    int arr[10];
    int top = -1;
    public:
    void push(int x){
        arr[top+1] = x;
    }

    int pop(){
        return arr[top--];
    }

    // int top(){
    //     return arr[top];
    // }

    int size(){
        return top+1;
    }

    int isEmpty(){
        return top == -1;
    }

};


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Stack x;
    x.push(10);
    x.push(20);
	cout<<x.pop()<<endl;
    cout<<x.isEmpty()<<endl;
    cout<<x.size()<<endl;
	return 0;
}
