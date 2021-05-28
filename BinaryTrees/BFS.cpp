include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* Insert(struct Node* head, int x){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = x;
    node->left = NULL;
    node->right = NULL;
    if(head == NULL){
        head = node;
    }
    else{
        if(head->data > x){
            head->left = Insert(head->left,x);
        }else{
            head->right = Insert(head->right,x);
        }
    }

    return head;
}

void Print(Node *root){
	if(root != NULL){
		Print(root->left);
		cout<<root->data<<" ";
		Print(root->right);
	}
}

int main(){
    int n;
    cin>>n;
    struct Node *root=NULL;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        root = Insert(root,x);
    }
    Print(root);
    // vector<int> v = BFS(root);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
}