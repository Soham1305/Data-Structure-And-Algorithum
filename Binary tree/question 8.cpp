//hight blance binary search tree
//first mathode needs O(n^2) time complexity
//second mehhod needs O(n) time complexity
//date 29/11/2022
#include <bits/stdc++.h>
using namespace std;

struct node{
    
    int data;
    node* left ;
    node* right ;

    node(int val){

        data=val;
        left=NULL;
        right=NULL;
    }
};

int hight(node* root){
    if(root== NULL){
        return 0;
    }
    int lh=hight(root->left);
    int rh=hight(root->right);
    return max(lh,rh) +1;
}

bool method2 (node* root,int * hight){

    if(root==NULL){
        return true;
    }

    int lh=0;
    int rh=0;

    if(method2(root->left , &lh) == false){

        return false;

    }

    if(method2(root->right, &rh) == false){

        return false;

    }

    *hight = max(lh,rh) + 1;

    if(abs(lh-rh) <= 1){

        return true;

    }
    else{

        return false;

    }
}

bool isblanced(node* root){
    if(root==NULL){
        return true;
    }
    if(isblanced(root->left)==false){

        return false;

    }if(isblanced(root->right)==false){

        return false;
    }

    int lh=hight(root->left);
    int rh=hight(root->right);
    if(abs(lh-rh) <=1){

        return true;

    }else{

        return false;

    }

}
int main(){

    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left= new node(6);
    root->right->right= new node(7);

    if(isblanced(root)){

        cout<<"tree is blance"<<endl;

    }else{

        cout<<"tree id not blance"<<endl;

    }

    node* root2=new node(1);
    root2->left=new node(2);
    root2->left->left=new node(3);

if(isblanced(root2)){

        cout<<"tree is blance"<<endl;

    }else{

        cout<<"tree id not blance"<<endl;

    }

int hight =0;

if(method2(root,&hight)){

        cout<<"tree is blance"<<endl;

    }else{

        cout<<"tree id not blance"<<endl;

    }
if(method2(root2,&hight)){

        cout<<"tree is blance"<<endl;

    }else{

        cout<<"tree id not blance"<<endl;

    }

    return 0;
}