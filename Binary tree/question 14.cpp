//lowest comman ancestor 
//date : 04/12/2022

#include <bits/stdc++.h>
#include <iostream>
#include <vector>

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

bool get(node* root ,int key,vector<int> &path){

    if(root==NULL){

        return false;
    }

    path.push_back(root->data);

    if(root->data == key){
        return true;
    }

    if(get(root->left ,key,path) || get(root->right , key,path)){
        return true;
    }

    path.pop_back();

    return false;

}

int LCA(node* root ,int n1, int n2){

    vector<int> path1,path2;

    if(!get(root,n1,path1) ||  !get(root,n2,path2)){

        return -1;
    }

    int pc;

    for(pc=0;pc<path1.size() && path2.size();pc++){

        if(path1[pc] != path2[pc]){

            break;
        }
    }

    return path1[pc-1];
    
}

node* LCA2(node* root, int n2,int n1){

    if(root== NULL){
        
        return NULL;
    }

      if(root->data == n1 || root->data ==n2){

        return root;
      }
      node* leftlca = LCA2(root->left , n2,n1);
      node* rightlca= LCA2(root->right,n2,n1);

      if(leftlca && rightlca){

        return root;
      }

      if(leftlca != NULL){

        return leftlca;
      }

      return rightlca;
}

int main(){

    node*root = new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->right->left=new node(5);
    root->right->right=new node(6);
    root->right->left->left=new node(7);
    
    int n1=7,n2=6;

    int lca = LCA(root,n1,n2);
    node* LCA3 =LCA2(root,n2,n1);

    if(lca == -1){

        cout<<"LCA does not exit"<<endl;
    }else{

        cout<<"LCA : "<<lca <<endl;
    }

    if(LCA3 == NULL){

        cout<<"LCA does not exit"<<endl;
    }else{

        cout<<"LCA : "<<LCA3->data <<endl;
    }
    return 0;
}