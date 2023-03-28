//Intoduction of Binary Trees . 

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

const int N=1e5+7 ;

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

int main(){

   struct node* root = new node(1);

   root->left= new node(2);

   root->right = new node(3);

   root->left->left= new node(4);

   root->left->right = new node(5);

   root->right->left = new node(6);

   root->right->right= new node(7);


    return 0 ;
}