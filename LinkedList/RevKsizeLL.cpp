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

void Insert(struct Node **head,int x){
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->data = x;
    node->next = NULL;

    if((*head) == NULL){
        (*head) = node;
    }else{
        struct Node *temp = *head;

        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = node;
    }
}

struct Node* Reverse(struct Node* head, int k)
{
    stack<struct Node*> mystack;
    struct Node* current = head;
    struct Node* prev = NULL;
    struct Node* next = NULL;
    int count = k;

    while(count-- && current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    if(head != NULL){
        head->next = Reverse(next,k);
    }

    return prev;
}


void Print(struct Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    int n,k;
    cin>>n>>k;
    struct Node* root = NULL;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        Insert(&root,x);
    }
    // Print(root);
    root = Reverse(root,k);
    Print(root);
}