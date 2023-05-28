//  make a binary search tree from array 
//  date : 05/12/2022

#include <bits/stdc++.h>
using namespace std;

struct node{

    int data;
    node* left;
    node* right;

    node(int val){

        data = val;
        left = NULL;
        right = NULL;

    }

};

node* insertatBST(node* root , int val){

    if(root == NULL){

    return new node(val);
    }

    if( val < root->data){
     
    root->left = insertatBST(root->left , val);

    }else {
        //for val < root->data;

    root-> right = insertatBST(root->right , val);

    }

    return root;
}

void printinorder(node* root){

    if(root == NULL){

        return ; 
    }

    printinorder(root->left);

    cout<<root->data<<" ";

    printinorder(root->right);

}

int main(){

    node* root = new node(5);
    insertatBST(root,1);
    insertatBST(root,3);
    insertatBST(root,4);
    insertatBST(root,2);
    insertatBST(root,7);
    //insertatBST(root,);

    //print inorder 

    printinorder(root);

    cout<<endl;

    return 0;

}