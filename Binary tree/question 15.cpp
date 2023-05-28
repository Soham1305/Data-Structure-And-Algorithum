//maximum path sum in binary search tree
//date : 04/12/2022

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

int mpath(node* root ,int &ans){

    if(root==NULL){

        return 0;
    }

    int left=mpath(root->left,ans);

    int right=mpath(root->right,ans);

    int nodemax=  max(max(root->data,root->data+left+right),
                  max(root->data+left,root->data+right));

    ans= max(ans,nodemax);
                  
    int singlepathsum= max(root->data,
                       max(root->data + left,root->data+right));

    return singlepathsum;
}

int maxpathsum(node* root){

    int ans = INT_MIN;
    
    mpath(root,ans);

    return ans;
}

int main(){

    node* root = new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->right->right=new node(5);

    //test
    cout<<maxpathsum(root);
    
    return 0;
}