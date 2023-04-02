// build a tree form postorder and inorder 

#include <iostream>
#include <vector>
#include <stack>    
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <string> 
#include <map>
#include <set> 
//#include <bits/stdc++.h>

#define vi vector<int>
#define vvi vector <vi> 
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)

using namespace std;

const int N = 1e5+7 ;
int n1;
struct node{

    int data ;

    struct node* left ;

    struct node* right ;

    node(int val){

        data = val ;

        left = NULL ;

        right = NULL ;
    }
};

int search(int b[] , int key){

for(int i= 0 ;i<n1;i++){

    if(b[i] == key){

        return i ;
    }
}

return -1 ;

}
void preorder(struct node* root){

    if( root == NULL){

        return ;
    }

    cout<<root->data<<"  ";

    preorder(root->left);

    preorder(root->right);
}

node* build (int a[] , int b[] ,int start , int end){
if(start> end){

    return NULL ;
}

static int idx = n1-1 ;

int curr=b[idx];
 
idx-- ;
struct node* root = new node(curr);

if(start == end){

    return root ;
}

int pos = search(a,curr);

root->right=build(a,b,pos+1,end);

root->left = build(a,b,start,pos-1);


}
int main(){

    cin>>n1 ;

    int a[n1];

    int b[n1];

    for(int i = 0 ;i<n1;i++){

        cin>>a[i];
    }
    for(int i = 0 ;i<n1;i++){

        cin>>b[i];
    }

    struct node* root = build(a,b,0,n1-1);

    preorder(root);cout<<endl;

    return 0 ;
}