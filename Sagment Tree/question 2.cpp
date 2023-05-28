// query in sagment trees ;

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


const int N = 1e5 + 5,MOD = 1e9+7;

int a[N],tree[N];

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

int query(int node,int st,int en,int l,int r){
    // st .... en ... l ... r. ..
    // l ... st...en...r....
    // st ... l...en... r.... // l ... st...r...en

    if( st>r || en < l){

        return 0;
    }

    if( l <= st && en <= r){

        return tree[node];
    }

    int mid =(st+en)/2;

    int q1 = query(2*node,st,mid,l,r);

    int q2 = query(2*node+1,mid+1,en,l,r);

    return q1+q2;


}
int main(){

    int n;
    cin>>n;

    rep(i,0,n){
        
        cin>>a[i];
    }

    build(1,0,n-1);

    while(1){

        int type;
        cin>>type;

        if(type == -1){

            break;
        }
        if( type == 1){
            int l,r;
            cin>>l>>r;

            int ans = query(1,0,n-1,l,r);

            cout<<ans<<endl;
        }
    }

    return 0;
}