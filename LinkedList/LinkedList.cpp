#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

class Node{
	public:
        int val;
        Node *next;
};

void Insert(Node **head, int y){
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->val = y;
    temp->next = NULL;
    if(*head == NULL){
        (*head) = temp;
    }else{
        Node *x = (*head);
        while(x->next != NULL){
            x = x->next;
        }
        x->next = temp;
    }
}
void Delete(Node **head, int y){
    Node *temp = (Node*)malloc(sizeof(Node));
    if((*head)->val == y){
        (*head) = (*head)->next;
    }else{
        Node *x = (*head);
        while(x->next->val != y){
            x = x->next;
        }
        temp = x->next->next;
        x->next = temp;
    }
}



void PrintList(Node *head){
    while(head != NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    int y;
    Node *root = (Node*)malloc(sizeof(Node));
    bool n = false;
    while(1){
        int x;
        cout<<"Opt"<<endl;
        cin>>x;
        switch(x){
            case 1: cout<<"Insert"<<endl;
                    cin>>y;
                    if(n){
                        Insert(&root,y);
                    }else{
                        root->val = y;
                        n = true;
                    }
                    break;
            case 2: PrintList(root);
                    break;
            case 3: cout<<"Del"<<endl;
                    cin>>y;
                    Delete(&root,y);
                    break;
            default :
                    break;
        }
    }
    return 0;
}