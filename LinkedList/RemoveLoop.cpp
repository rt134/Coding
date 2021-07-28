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

void Circle(struct Node** root,int x){
    struct Node* temp = (*root);
    while(x-- && temp){
        temp = temp->next;
    }
    struct Node* node = temp;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
}

void Insert(struct Node** head,int x){
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->data = x;
    node->next = NULL;

    if((*head) == NULL){
        (*head) = node;
    }else{
        struct Node *temp = (*head);
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = node;
    }
}

bool DetectLoop(struct Node* temp){
    if(!temp || !temp->next){
        return false;
    }
    struct Node* turtle = temp;
    struct Node* rabbit = temp->next;

    while(rabbit && rabbit->next){
        if(turtle == rabbit){
            return true;
        }

        turtle = turtle->next;
        rabbit = rabbit->next->next;
    }

    return false;
}

void DeleteLoop(struct Node** head){
    struct Node* slow = (*head);
    struct Node* fast = (*head);
    
    slow = slow->next;
    fast = fast->next->next;
    
    while(fast && fast->next){
        if(fast == slow){
            break;
        }
        slow = slow->next;
        fast = fast->next->next;
    }

    slow = (*head);
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
    (*head) = fast;

}

void Print(struct Node *temp){
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    int n,x;
    cin>>n>>x;
    struct Node *root = NULL;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        Insert(&root,y);
    }

    Print(root);

    if(x != 0){
        Circle(&root,x);
    }
    cout<<DetectLoop(root)<<endl;
    DeleteLoop(&root);
    Print(root);
    return 0;
}