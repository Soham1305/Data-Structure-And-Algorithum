//hight of the binary tree
// date 27/11/2022
//we find high og recersivly left and right side
#include <bits/stdc++.h>
using namespace std;

struct node{

    int data;
    node* left;
    node* right;

    node(int val){
        data= val;
        left=NULL;
        right=NULL;
    }

};

int diamathod3(node* root,int *hight){

    if(root==NULL){
        *hight=0;
        return 0;
    }

    int lh=0,rh=0;

    int ldiameter=diamathod3(root->left,&lh);
    int rdiameter=diamathod3(root->right,&rh);

    int currdiameter=lh+rh+1;
    *hight=max(lh,rh)+1;

    return max(currdiameter,max(ldiameter,rdiameter));
}

int caldaimeter(node* root){

    if(root==NULL){
        return 0;
    }

    int lhight= calhight(root->left);
    int rhight= calhight(root->right);

    int currdiameter=lhight + rhight + 1;
    
    int ldiameter= caldaimeter(root->left);
    int rdiameter= caldaimeter(root->right);

    return max(currdiameter,max(lhight,rhight));

}

int calhight(node* root){

    if(root==NULL){
        return 0;
    }

    int lefthight=calhight(root->left);
    int righthight=calhight(root->right);

    return max(lefthight,righthight)+1;

}

int main(){

    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    cout<<calhight(root)<<endl;

    cout<<caldaimeter(root)<<endl;

    int hight=0;
    
    cout<<diamathod3(root,&hight)<<endl;

    return 0;
}