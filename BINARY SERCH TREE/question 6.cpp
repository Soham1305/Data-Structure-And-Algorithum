//catlan numbers 
//very very important topic inmportant to understand infuture more topic
//date : 07/12/2022
//day 75
//video 112


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

vector<node*> construct(int start , int end){

    vector<node*> trees;

    if( start > end ){

        trees.push_back(NULL);
    }

    for(int i=start;i<=end;i++){

        vector<node*> leftsubtrees = construct(start , i-1);
        vector<node*> rightsubtrees = construct( i+1,end); 

        for(int j = 0;j<leftsubtrees.size();j++){

            node* left = leftsubtrees[j];

            for(int k =0;k<rightsubtrees.size();k++){

                node* right= rightsubtrees[k];

                node* ROOT = new node(i);

                ROOT->left = left;

                ROOT->right = right;

                trees.push_back(ROOT);
            }
        }
    }

 return trees;

}

void preorder(node* root){

    if( root == NULL){

        return ;
    }

    cout<< root -> data <<" ";

    preorder(root -> left);

    preorder(root -> right);

}
int main(){

    int n;
    cin>>n;

    vector<node*> totaltrees = construct(1,n);

    for( int i= 0; i<totaltrees.size();i++){

        cout<<(i + 1 )<<" : ";

        preorder(totaltrees[i]);

        cout<<endl;

    }

    return 0;
}
