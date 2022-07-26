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
	Node *temp;
	temp = (Node*)malloc(sizeof(Node));
	temp->data = n;
	temp->left = NULL;
	temp->right= NULL;
	return temp;
}

bool Find(Node* head, int x){
	if(head->data == x ){
		return true;
	}else{
		if(x > head->data){
			if(head->right != NULL){
				return Find(head->right,x);
			}else{
				return false;
			}
			
		}else{
			if(head->left != NULL){
				return Find(head->left,x);
			}
			else{
				return false;
			}
		}
	}
	return false;
}

Node *Insert(Node *head,int d){
	if(head == NULL){
		head = create(d);
		return head;
	}
	else{
		if(head->data > d){
			head->left = Insert(head->left,d);
		}else{
			head->right = Insert(head->right,d);
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



int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = NULL;
	int n,f;
	cin>>n>>f;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		root = Insert(root,x);
	}

	InorderPrint(root);
	cout<<endl;
	cout<<Find(root,f)<<endl;

    return 0;
}
