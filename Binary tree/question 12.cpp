//date : 02/12/2022
//flatten a binary tree

#include <bits/stdc++.h>
using namespace std;

struct node{

    int data;
    node* left;
    node* right;

    node(int val){

        data= val;
        left= NULL;
        right= NULL;
    }
};

void flatten( node* root){

    if(root == NULL ||( root->left==NULL && root-> right == NULL)){
        return ;
    }

    if(root-> left != NULL){

        flatten(root->left);

        node* temp = root-> right;

        root->right = root->left;

        root->left = NULL;

        node* t=root-> right;

        while(t->right != NULL){

            t= t->right;
        }

        t->right = temp;
    }
    flatten(root->right);
}

void inoreder(node* root){

    if(root == NULL){

        return ;
    }

    inoreder(root->left);

    cout<<root->data <<" ";

    inoreder(root->right);

}

int main(){

    node* root= new node(4);
    root->left= new node(9);
    root->right= new node(5);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right->left=new node(6);

    flatten(root);

    inoreder(root);
    
    return 0;
}