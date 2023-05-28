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
#define int long long
const int N = 1e5+2, MOD = 1e9+7;


int tree[4*N], a[N];


void build(int node, int st, int en)
{
    if(st == en){
        tree[node] = a[st];
        return;
    }


    int mid = (st + en)/2;
    build(2*node, st, mid);
    build(2*node+1, mid+1, en);


    tree[node] = tree[2*node] + tree[2*node+1];
}


// int kthOne(int node, int st, int en, int k){
//     if(st == en){
//         return st;
//     }


//     int mid = (st + en)/2;
//     if(k<tree[2*node]){
//         return kthOne(2*node, st, mid, k);
//     }
//     else{
//         return kthOne(2*node+1, mid+1, en, k-tree[2*node]);
//     }
// }

int KTH(int node , int st,int en,int k){

    if( st == en){

        return st;
    }
    int mid = ( st + en)/2;

    if( k < tree[2*node]){

        return KTH(2*node,st,mid,k); 
    }else{

        return KTH(2*node+1,mid+1,en,k-tree[2*node]);
    }
}

// void update(int node, int st, int en, int idx){
//     if(st == en){
//         if(a[st] == 1){
//             a[st] = 0;
//             tree[node] = a[st];
//         }
//         else {
//             a[st] = 1;
//             tree[node] = a[st];
//         }
//         return;
//     }


//     int mid = (st+en)/2;
//     if(idx <= mid){
//         update(2*node, st, mid, idx);
//     }
//     else
//     {
//         update(2*node+1, mid+1, en, idx);
//     }


//     tree[node] = tree[2*node] + tree[2*node+1];
// }

void U ( int node, int st , int en , int idx){

    if( st == en){

        if( a[st] == 1){

            a[st] = 0 ;
            tree[node] = a[st];
        }
        else{

            a[st] = 1;
            tree[node] = a[st];
        }
        return ;
    }

    int mid = (st + en)/2;

    if( idx < mid){

        U(2*node,st,mid , idx);
    }else{

        U(2*node+1,mid+1,en,idx);
    }

    tree[node] = tree[2*node] + tree[2*node +1 ];

}


signed main()
{
    int n,m;
    cin >> n >> m;


    for(int i=0; i<n; i++)
        cin >> a[i];


    build(1,0,n-1);


    while(m--){
        int type;
        cin >> type;
        if(type == 1){
            int idx;
            cin >> idx;
            U(1,0,n-1,idx);
        }
        else if(type == 2){
            int k;
            cin >> k;


            int ans = KTH(1,0,n-1,k);
            cout << ans << endl;
        }   
    }
    return 0;
}