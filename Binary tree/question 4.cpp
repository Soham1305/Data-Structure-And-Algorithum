//mack tree from preorder and postorder 
//code by soham_piprotar 
//please chack this solution for further for more 
//ataintion was requried in this topic 
//date 26/11/2022
#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int search(int inorder[] , int start , int end , int val){

    for(int i=start;i<=end;i++){

        if(inorder[i]==val){

            return i;
        }
    }
    return -1;
}

node* maketree(int postorder[],int inorder[],int start,int end){
      static int idx=4;

      if(start>end){

        return NULL;

      }

      int val=postorder[idx];

      idx--;

      node* curr=new node(val);

      if(start == end){

        return curr;

      }

      int pos=search(inorder,start,end,val);

      curr->right = maketree(postorder,inorder,pos+1,end);

      curr->left = maketree(postorder,inorder,end,pos-1);

      return curr;

}

void inorderprint(node* root){
    
    if(root==NULL){

        return ;

    }

    inorderprint(root->left);

    cout<<root->left<<" ";

    inorderprint(root->right);

}

int main(){

    int postorder[]={4,2,5,3,1};

    int inorder[]={4,2,1,5,3};

    //build tree;

    node* root=maketree(postorder,inorder,0,4);

    inorderprint(root);

    cout<<endl;

    return 0;

}