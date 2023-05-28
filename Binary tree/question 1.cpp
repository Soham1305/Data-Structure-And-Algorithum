//introduction of binary tree

//propertice of binary trees:
//            1.maximum nodes at level L=2^L;
//            2.maximum nodes in tree of hight H is 2^H-1;
//            3.For n nodes, minimum possible hight or minimum
//              number of leveis sre log e (N+1) ;
//            4.A binary tree with L leaves has st least
//              log 2 (N+1) number of leaves;

#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main(){
    struct node* root=new node(1);

    root->left=new node(2);

    root->right=new node(3);

    root->left->left=new node(4);

    root->left->right=new node(5);

    return 0;

}