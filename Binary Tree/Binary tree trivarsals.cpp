// Binary tree's Trivarsal's 

#include <iostream>
#include <vector>
#include <stack>    
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <string> 
#include <map>
#include <set> 
//#include <bits/stdc++.h>

#define vi vector<int>
#define vvi vector <vi> 
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)

using namespace std;

struct node{

    int data ;

    struct node* left ;

    struct node* right ;

    node(int val){

        data = val ;

        left = NULL ;

        right = NULL ;
    }
};

void preorder(struct node* root){

    if( root == NULL){

        return ;
    }

    cout<<root->data<<"  ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node* root){

    if( root == NULL){

        return ;
    }

    inorder(root->left);
    cout<<root->data<<"  ";
    inorder(root->right);
}

void postorder(struct node* root){

    if( root == NULL){
        return ;
    }

    postorder(root->left);
    postorder(root->right);

    cout<<root->data<<"  ";
}

int main(){
 
 struct node* root = new node(1) ;

 root->left = new node(2);

 root->right = new node(3);

 root->left->left = new node(4);

 root->right->left = new node(5);

 root->right->right= new node(6);

 preorder(root); cout<<endl;

 inorder(root);cout<<endl;

 postorder(root);cout<<endl;

 return 0 ;

}