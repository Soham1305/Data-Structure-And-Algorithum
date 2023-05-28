// numbers of minimums on a segment tree
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

const int N = 1e5+2,MOD = 1e9+7;

int a[N];
pii tree[4*N];

void build(int node,int st,int en){

    if(st == en){

        tree[node].first = a[st];
        tree[node].second = 1;
        return ;
    }

    int mid = (st+en)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,en);

    if(tree[2*node].first < tree[2*node+1].first){

        tree[node].first= tree[2*node].first;
        tree[node].second= tree[2*node].second;

    }else if(tree[2*node+1].first < tree[2*node].first){

        tree[node].first= tree[2*node+1].first;
        tree[node].second = tree[2*node+1].second;
    }else{

        tree[node].first=tree[2*node].first;
        tree[node].second = tree[2*node].second + tree[2*node+1].second;
    }


    tree[node] = min(tree[2*node],tree[2*node + 1]);

}

pii query(int node,int st,int en,int l,int r){
    // st .... en ... l ... r. ..
    // l ... st...en...r....
    // st ... l...en... r.... // l ... st...r...en

    if( st>r || en < l){

        return {MOD,-1};
    }

    if( l <= st && en <= r){

        return tree[node];
    }

    int mid =(st+en)/2;

    pii q1 = query(2*node,st,mid,l,r);

    pii q2 = query(2*node+1,mid+1,en,l,r);
    pii q;

    if( q1.first < q2.first){

        q = q1;
    }else if(q2.first < q1.first){

        q = q2;
    }else{
        q.first = q1.first;
        q.second = q1.second + q2.second;

    }

    return q;
}

void update(int node , int st,int en,int idx,int val){

    if(st == en){

        a[st] = val ;
        tree[node].first = val  ;
        tree[node].second = 1;
        return ;
    }

    int mid = (st + en)/2;

    if( idx <= mid){

    update(2*node,st,mid,idx,val);

    }else{

        update(2*node+1,mid+1,en,idx,val);
    }

    if(tree[2*node].first < tree[2*node+1].first){

        tree[node].first= tree[2*node].first;
        tree[node].second= tree[2*node].second;

    }else if(tree[2*node+1].first < tree[2*node].first){

        tree[node].first= tree[2*node+1].first;
        tree[node].second = tree[2*node+1].second;
    }else{

        tree[node].first=tree[2*node].first;
        tree[node].second = tree[2*node].second + tree[2*node+1].second;
    }



    tree[node] = max(tree[2*node],tree[2*node+1]);
}

int main(){

    int n,m;
    cin>>n>>m;

    rep(i,0,n){

        cin>>a[i];
    }

    build(1,0,n-1);

    while(m--){

        int type;
        cin>>type ;

        if(type == -1){

            break;
        }

        if( type == 1 ){

            int idx,val;
            cin>>idx>>val;

            update(1,0,n-1,idx,val);
            //cout<<query(1,0,n-1,0,n-1)<<endl;

            
        }

        else if ( type == 2){
            int l,r ;
            cin>>l>>r;

            pii ans = query(1,0,n-1,l,r);

            cout<<ans.second<<endl;
        }
    }

    return 0;
}