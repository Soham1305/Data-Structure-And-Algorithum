//count the sum of node 
//date 27/11/2022
#include <bits/stdc++.h>
using namespace std;

struct node {

       int data;
       node* left;
       node* right;

       node(int val){
        data= val;
        left=NULL;
        right=NULL;
       }

};

int sumnode(node* root){

    if(root==NULL){
      return 0;
    }

    return sumnode(root->left)+sumnode(root->right)+root->data;
}

int main(){

    node* root = new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    cout<<sumnode(root);
    
    return 0;
}