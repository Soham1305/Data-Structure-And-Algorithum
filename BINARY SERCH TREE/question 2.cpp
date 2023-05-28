//search in binary seach tree 
//deletation in binary search tree 
//video 108
//keep eye on the video 
//very very impotant topic 
// don't forgot to curr variable 

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

node* succ(node* root){

    node* curr= root;

    while( curr && curr -> left != NULL){

        curr = curr -> left;
    }

    return curr;
}

node* insertatBST(node* root , int val){

    if(root == NULL){

    return new node(val);
    }

    if( val < root->data){
     
    root->left = insertatBST(root->left , val);

    }else {
        //for val < root->data;

    root-> right = insertatBST(root->right , val);

    }

    return root;

}

void printinorder(node* root){

    if(root == NULL){

        return ; 
    }

    printinorder(root->left);

    cout<<root->data<<" ";

    printinorder(root->right);

}

node* searchinBST(node* root , int key){

    if(root == NULL){

        return NULL;
    }

    if(root->data == key ){

        return root;
    }

    //for key > node val

    if( root-> data > key){

        searchinBST(root->left , key);
    }

    //for key < node val

    else{

        searchinBST( root ->right, key);
    }

    return root;
}

node* deleteinBST(node* root , int key ){

    if( key < root -> data){

        deleteinBST( root -> left , key );
    }
    else if( key > root -> data){

        deleteinBST( root -> right , key );
    }
    else{

        //case 1;

        if( root -> left == NULL){

            node* temp = root -> right ;
            free(root);
            return temp;
        }

        // case 2;

        else if( root -> right == NULL){

            node* temp = root -> left ;
            free(root);
            return temp;
        }

        //casa 3;

        else{

            node* temp = succ( root -> right );
            root -> data = temp -> data;
            root ->right = deleteinBST( root -> right , temp ->data);
        }

    }

    return root;
}


int main(){

    node* root = new node(5);
    insertatBST(root,1);
    insertatBST(root,3);
    insertatBST(root,4);
    insertatBST(root,2);
    insertatBST(root,7);
    //insertatBST(root,);

    //print inorder 

    //printinorder(root);

    //cout<<endl;

    int n;
    cin>>n;
    
    if(searchinBST(root,n) == NULL) {

        cout<<"key is not found  in this BST"<<endl;
    }

    else{

        cout<<"Key is found in this BST"<<endl;
    }

    printinorder(root);

    cout<<endl;

    root = deleteinBST(root , 5);

    printinorder(root);

    cout<<endl;

    root = deleteinBST(root , 2);

    printinorder(root);

    cout<<endl;

    root = deleteinBST(root , 1);

    printinorder(root);

    return 0;

}