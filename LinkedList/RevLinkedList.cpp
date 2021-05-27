#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

void Insert(struct Node **head,int y){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = y;
    temp->next = NULL;
    if(*head == NULL){
        (*head) = temp;
    }else{
        struct Node *x = (*head);
        while(x->next != NULL){
            x = x->next;
        }
        x->next = temp;
    }
}

void Reverse(struct Node **root){
    struct Node *prev, *curr, *next;
    prev = NULL;
    next = NULL;
    curr = (*root);
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    (*root) = prev;
}

void Print(struct Node* head){
    while(head->next !=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<head->data<<endl;
}

int main(){
    int n;
    cin>>n;
    struct Node *root=NULL;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        Insert(&root,x);
    } 
    Print(root);
    Reverse(&root);
    Print(root);

    return 0;
}