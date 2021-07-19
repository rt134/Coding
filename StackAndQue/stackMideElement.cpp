#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Node{
    public :
    int data;
    Node *next;
};

class Stack{
    public:
    Node *head;
    Node *mid;
    int count;
};

void findMid(Stack **root, Node *head){
    int n = (*root)->count/2;
    while(n--){
        head = head->next;
    }
    (*root)->mid = head;
}

Node *create(int n){
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->data = n;
    temp->next = NULL;
    return temp;
}

Node *push(Node *head,Stack **root,int n){
    Node *temp = create(n);
    temp->next = head;
    (*root)->head = temp;
    (*root)->count = (*root)->count + 1;
    return temp;
}

Node *pop(Node *head,Stack **root){
    Node *temp = head->next;
    (*root)->head = temp;
    (*root)->count = (*root)->count - 1;
    return temp;
}

void Print(Node *head){
    while(head!= NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){

    Stack *root = (Stack*)malloc(sizeof(Stack));
    Node *head = NULL;
    root->head = head;
    root->mid = head;
    root->count = 0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        head = push(head,&root,x);
    }
    Print(head);
    head = pop(head,&root);
    Print(head);
    findMid(&root,head);
    cout<<root->head->data;
    cout<<root->mid->data;
    cout<<root->count;
    return 0;
}