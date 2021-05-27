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

    while (current != NULL) {

        int count = 0;
        while (current != NULL && count < k) {
            mystack.push(current);
            current = current->next;
            count++;
        }

        while (mystack.size() > 0) {

            if (prev == NULL) {
                prev = mystack.top();
                head = prev;
                mystack.pop();
            } else {
                prev->next = mystack.top();
                prev = prev->next;
                mystack.pop();
            }
        }
    }

    prev->next = NULL;
    return head;
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
    Reverse(root,k);
    Print(root);
}