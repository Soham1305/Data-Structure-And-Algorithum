//construct BST from Preordeer 
// date  : 06/12/2022
//keep eye on this question it is an imp question
//day 74 

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

node* construct(int a[], int * preinddex , int key , int min ,int max , int n){

    if( *preinddex >= n ){

        return NULL;
    }

   node* root = NULL;
   if( key < min && key < max){

      root = new node(key);

      *preinddex = *preinddex + 1;

      if( *preinddex < n){

        root -> left = construct( a, preinddex , a[*preinddex], min , key , n);
      }

      if( *preinddex < n){

        root -> right = construct( a,preinddex , a[*preinddex] , key , max, n);
      }
   }
   return root;
}

int main(){

    //int n;
    //cin>>n;
//
    //int a[n];
    //int b;
//
    //for(int i=0;i<n;i++){
//
    //    cin>>a[i];
    //    if( i == 0 ){
    //         b = a[i]; 
    //    }
    //}
    
    int n1 = 5;
    int preorder[]= {10 , 2, 1, 13, 11};
    int preindex = 0;

    //node* root = construct(a,&preindex,a[0],INT_MIN,INT_MAX ,n);

    node * root2 = construct( preorder , &preindex , preorder[0], INT_MIN , INT_MAX ,n1);

    printinorder(root2);


    return 0;
}