//code by soham _ piprotar
//review this code for later this is important implimatation
//through inorder and preorder to devlop a tree
#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left ;
    node* right;

    node(int val){

       data=val;
       left=NULL;
       right=NULL;

    }
};

int search(int inorder[],int start,int end,int curr){

    for(int i=start;i<=end;i++){

        if(inorder[i]==curr){

            return i;
        }
    }
    return -1;//node postible if question approch is true 
}

node* buildtree(int preorder[],int inorder[],int start,int end){

    static int idx=0;

    if(start>end){

     return NULL;

    }

    int curr=preorder[idx];

    node* Node=new  node(curr);

    idx++;

    if(start==end){
        return Node;
    }

    int pos= search(inorder,start,end,curr);

    Node->left=buildtree(preorder,inorder,start,pos-1);

    Node->right=buildtree(preorder,inorder,pos+1,end);

    return Node ;

}

void inorderprint(node* root)
{
    if(root==NULL){

        return ;

    }
    inorderprint(root->left);

    cout<<root->data<<" ";

    inorderprint(root->right);

}

int main(){
    int preorser[]={1,2,3,4,5};

    int inorder[]={4,2,1,5,3};

    node* root=buildtree(preorser,inorder,0,4);

    inorderprint(root);

    return 0;
}