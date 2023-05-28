//chack for binary search tree 
// carry day 54

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

void printinorder(node* root){

    if(root == NULL){

        return ; 
    }

    printinorder(root->left);

    cout<<root->data<<" ";

    printinorder(root->right);

}

bool isBST(node* root , node* min = NULL ,  node* max = NULL){

    if( root == NULL ){

        return true ;
    }

    if( min != NULL && root -> data <= min -> data){

        return false ;
    }

    if( max != NULL && root -> data >= max -> data ){

        return false ;
    }

    bool leftside= isBST( root-> left , min , root);

    bool rightside = isBST( root -> right , root , max );

    return leftside&&rightside ; 
}

int  main(){

    node* root = new node(1);

    root-> left = new node(2);

    root -> right = new node(3);

    if( isBST(root , NULL , NULL)){

        cout<<"THIS IS A VELIDE BST "<<endl;

    }else {

        cout<<" THIS IS A  NOT VELIDE BST "<<endl;
    }


    return 0;
}