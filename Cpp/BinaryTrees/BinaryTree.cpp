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

    Node *root = (Node*)malloc(sizeof(Node));
	int y;
	bool n = false;
    while(1){
        int x;
        cout<<"Opt"<<endl;
        cin>>x;
        switch(x){
            case 1: cout<<"Insert"<<endl;
                    cin>>y;
                    if(n){
                        root = Insert(root,y);
                    }else{
                        root->data = y;
                        n = true;
                    }
                    break;
            case 2: InorderPrint(root);
                    break;
            default :
                    break;
        }
    }
    return 0;
}
