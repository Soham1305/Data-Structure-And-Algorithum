//right view of binary tree 
//left side view of binary search tree

//date 28/11/2022
#include <bits/stdc++.h>
using namespace std;

struct node{
    
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};

void leftside(node* root){

    if(root==NULL){
        return ;
    }

    queue <node*> q;
    q.push(root);

    while(!q.empty()){

        int n=q.size();

        for(int i=1;i<=n;i++){

            node* temp=q.front();
            q.pop();

            if(i==1){
                cout<<temp->data<<" ";
            }

            if(temp->left != NULL){
                q.push(temp->left);
            }

            if(temp->right != NULL){
                q.push(temp->right);
            }

        }
    } 


}

void rightviewd(node* root){

    if(root==NULL){
        //cout<<endl;
        return ;
    }

    queue<node*> q;
    q.push(root);

    while(!q.empty()){

        int n=q.size();

        for(int i=0;i<n;i++){
            node* curr=q.front();
            q.pop();

            if(i==n-1){
                cout<<curr->data<<" ";
            }

            if(curr->left != NULL){
                q.push(curr->left);
            }

            if(curr->right != NULL){
                q.push(curr->right);
            }
        }

        
    }
    cout<<endl;

}

int main(){

    node* root = new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    //right side view of binary search tree 

    rightviewd(root);

    //left side view of binary search tree

    leftside(root);

    return 0;
}