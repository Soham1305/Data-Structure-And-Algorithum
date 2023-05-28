// find that given two tree is idential tree or not 

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

bool isidential(node* root1, node* root2){

    if( root1 == NULL && root2 == NULL){

        return true;
    }else if( root1 == NULL || root2 == NULL){

        return false ;
    }

    if( root1-> data != root2->data){

        return false;
    }

    isidential( root1-> left , root2-> left);

    isidential( root1 -> right , root2-> right);

    return true;
}

bool indential2( node* root1 , node* root2){

    if( root1 == NULL && root2 == NULL){

        return true ;
    }

    if( root1 == NULL || root2 == NULL){

        return false;
    }
    else{

        bool con1 = root1 -> data == root2 -> data;
        bool con2 = indential2( root1 -> left , root2 -> left);
        bool con3 = indential2( root1 -> right , root2-> right);

        if( con1 && con2 && con3){

            return true;
        }
    }

    return false;
}
int main(){

    node* root1 = new node(3);
    
    root1 -> left = new node(2);

    root1 -> right = new node(3);

    node* root2 = new node (5);

    root2 -> left = new node(3);

    root2 -> right = new node(8); 

    node* root3= new node(10);

    root3 -> left = new node(9);

    root3 -> left -> left = new node(3);


    if(isidential(root1,root1)){

        cout<<"BOTH tree are idential binary search tree"<<endl;

    }
    else{

        cout<<"BOTH tree are not indential binary search tree"<<endl;
    }
    if(isidential(root1,root2)){

        cout<<"BOTH tree are idential binary search tree"<<endl;

    }
    else{

        cout<<"BOTH tree are not indential binary search tree"<<endl;
    }


    return 0;
}