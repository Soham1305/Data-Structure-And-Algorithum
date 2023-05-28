//largest BST in a binary tree 
//day 77 
// date : 09/08/2022

#include <bits/stdc++.h>
#include <iostream>
#include <climits> 
using namespace std;

struct node{

    int data;
    node* left ;
    node* right ;

    node( int val){

        data = val;
        left = NULL;
        right  = NULL;
    }
};

struct INFO{
    int size;
    int max;
    int min;
    int ans;
    bool isBST;
};

INFO islargestBST(node* root){

    if( root == NULL){

        return {0, INT_MIN,INT_MAX,0,true};
    }

    if( root -> left == NULL && root -> right == NULL){

        return {1, root-> data,root-> data,1,true};
    }

    INFO leftinfo = islargestBST(root -> left);
    INFO rightinfo = islargestBST( root -> right );

    INFO curr;

    curr.size = (1+ leftinfo.size+rightinfo.size);

    if( leftinfo.isBST && rightinfo.isBST && leftinfo.max < root -> data 
       && rightinfo.min > root -> data){

        curr.min = min(leftinfo.min , min(rightinfo.min, root -> data));
        curr.max = max(leftinfo.max , max(rightinfo.max, root -> data));

        curr.ans = curr.size;
        curr.isBST = true;

        return curr;
    }

    curr.ans = max( leftinfo.ans , rightinfo.ans);
    curr.isBST = false;

    return curr;
}

int main(){
    
    node* root = new node(15);

    root -> left = new node(20);

    root -> right = new node(30);

    root -> left -> left = new node(5);

    cout<<"Largest BST in BT is "<< islargestBST ( root ).ans <<endl;
    

    return 0 ;
}