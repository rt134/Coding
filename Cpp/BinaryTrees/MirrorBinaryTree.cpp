#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
class Node{
	public:
        int data;
        Node *left;
		Node *right;
};

Node *create(int n){
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->data = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

Node *Insert(Node *head, int n){
    if(head == NULL){
        head = create(n);
    }else{
        if(head-> data > n){
            head->left = Insert(head->left,n);
        }else{
            head->right = Insert(head->right,n);
        }
    }

    return head;
}

void InorderPrint(Node *root){
	if(root != NULL){
		InorderPrint(root->left);
		cout<<root->data<<" ";
		InorderPrint(root->right);
	}
}

Node *Mirror(Node *head, Node *mirror){
    if(head == NULL){
        mirror = NULL;
    }else{
        mirror = create(head->data);
        mirror->left = Mirror(head->right, mirror->left);
        mirror->right = Mirror(head->left, mirror->right);
    }
    return mirror;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = NULL;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        root = Insert(root,x);
    }

    InorderPrint(root);
    Node *mirror = NULL;
    mirror = Mirror(root, mirror);
    cout<<endl;
    InorderPrint(mirror);

    return 0;
}