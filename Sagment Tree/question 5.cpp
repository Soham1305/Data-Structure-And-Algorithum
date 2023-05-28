// snippets 

// code snippets are templates that makes it easier to enter repeating code patterns ,
// such as loops or conditional - statements .
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

const int N = 1e5+2,MOD= 1e9+7;

int a[N];

int tree[N];

void build(int node,int st,int en){

    if(st == en){

        tree[node] = a[st];
        return ;
    }

    int mid = (st+en)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,en);

    tree[node] = max(tree[2*node],tree[2*node + 1]);

}

int query(int node,int st,int en,int l,int r){
    // st .... en ... l ... r. ..
    // l ... st...en...r....
    // st ... l...en... r.... // l ... st...r...en

    if( st>r || en < l){

        return INT_MIN;
    }

    if( l <= st && en <= r){

        return tree[node];
    }

    int mid =(st+en)/2;

    int q1 = query(2*node,st,mid,l,r);

    int q2 = query(2*node+1,mid+1,en,l,r);

    return max(q1,q2);


}

void update(int node , int st,int en,int idx,int val){

    if(st == en){

        a[st] = val ;
        tree[node] = val  ;
        return ;
    }

    int mid = (st + en)/2;

    if( idx <= mid){

    update(2*node,st,mid,idx,val);

    }else{

        update(2*node+1,mid+1,en,idx,val);
    }

    tree[node] = max(tree[2*node],tree[2*node+1]);
}