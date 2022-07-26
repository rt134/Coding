#include <bits/stdc++.h>
#include <queue>
using namespace std;

class Node {
    public :
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
        if(head->data > n){
            head->left = Insert(head->left,n);
        }else{
            head->right = Insert(head->right,n);
        }
    }
    return head;
}

void Inorder(Node *head){
    if(head != NULL){
        Inorder(head->left);
        cout<<head->data<<" ";
        Inorder(head->right);
    }
}

void LevelOrder(Node *head){
    queue<Node*> q;
    q.push(head);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left != NULL){
            q.push(temp->left);
        }

        if(temp->right != NULL){
            q.push(temp->right);
        }
    }
    cout<<endl;
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
    Inorder(root);
    cout<<endl;
    LevelOrder(root);

}