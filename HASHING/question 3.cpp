//print vertiacal horizontal order of binary tree;

#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <string> 

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)  


#include <bits/stdc++.h>

using namespace std;

struct node {
   int data; 
   node* left;
   node* right ;

   node(int val){

    data = val;
    left = NULL;
    right = NULL;
   }

};
void GETvectororder(node* root , int hdis, map<int,vi> &m){

    if( root == NULL){

        return;
    }

    m[hdis].push_back(root -> data );

    GETvectororder(root->left,hdis-1,m);

    GETvectororder( root -> right , hdis+1, m );


}

signed main(){
   
   node* root =new node(10);
   
   root ->left = new node(7);

   root -> right = new node(4);

   root -> left ->left = new node(3);
   
   root -> left -> right = new node(11);

   root -> right-> left = new node(14);

   root -> right ->right = new node(6);

   map<int,vi> m;

   int hdis= 0;

   GETvectororder(root,hdis,m);

   map<int ,vi> :: iterator it;

   for(it=m.begin();it!=m.end();it++){

    for(int i=0;i<(it->ss).size();i++){

        cout<<(it->ss)[i]<<" ";
    }

    cout<<endl;
   }



    return 0;
}