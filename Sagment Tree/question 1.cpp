// introduction about sagment trees ds

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

const int N =1e5+7,MOD=1e9+7;

int a[N];
int tree[4*N];

void build(int node,int st,int en){

    if(st == en){

        tree[node] = a[st];
        return ;
    }

    int mid = (st+en)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,en);

    tree[node] = tree[2*node]+tree[2*node + 1];

}

int main(){

    int n;
    cin>>n;

    rep(i,0,n){

        cin>>a[i];
    }
    
    build(1,0,n-1);

    rep(i,1,15){
      
      cout<<tree[i]<<endl;
    }
    return 0;
}

