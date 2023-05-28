//builed a blanced binary search tree with the help of sorted array 

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

node* makeaBSTfromsortedarray(int a[], int start, int end){

    if(start > end){

        return NULL;
    }
    int mid = (start+end)/2;
    
    node* root = new node(a[mid]);

    root -> left = makeaBSTfromsortedarray(a,start,mid-1);

    root -> right = makeaBSTfromsortedarray(a,mid+1,end);

    return root;
}

int main(){

    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){

        cin>>a[i];
    }

    node* root = makeaBSTfromsortedarray(a,0,n-1);

    printinorder(root);

    return 0;
}