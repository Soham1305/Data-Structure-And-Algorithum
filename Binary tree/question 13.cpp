//print all node at distance K
//date : 03/12/2022

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

void printsubtreenodes(node* root , int k){

    if(root == NULL){

        return ;

    }

    if(k==0){

        cout<<root->data<<" ";

    }

    printsubtreenodes(root->left,k-1);
    printsubtreenodes(root->right,k);
}

//case 2

int printnodeata(node* root, node* target ,int k){
    
    if(root==NULL){
        return -1;
    }

    if(root==target){
        printsubtreenodes(root,k);
        return 0;
    }

    int dl = printnodeata(root->left,target,k);

    if(dl != -1){
        if(dl + 1 == k){

            cout<< root->data <<" ";

        }else{

            printsubtreenodes(root->right,k-dl-2);

            return 1+dl;
        }
    }

    int dr = printnodeata(root->right,target,k);

    if(dl != -1){
        if(dl + 1 == k){

            cout<< root->data <<" ";

        }else{

            printsubtreenodes(root->left,k-dl-2);

            return 1+dl;
        }
    }

    return -1;
}

int main(){

    node* root= new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    
    //printsubtreenodes(root,root->left,1);
    printnodeata(root,root->left,1);
    
    return 0;
}