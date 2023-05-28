// k Ordered LCS 
// keep eye on this  code 
// dry run and work on tnis code by the momeorizing mathod 

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
#include <bits/stdc++.h>

#define vi vector<int>
#define vvi vector <vi> 
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)

using namespace std;

int n,m,k;

vi a,b;

int solve(int i,int j,int k){

    if( i == n || j == m){

        return 0;
    } 
    int c1(0),c2(0),c3(0);

    if(a[i] == b[j]){

        c1 = 1+ solve(i+1,j+1,k);
    }
    if( k>0){

        c2 = 1+ solve(i+1,j+1,k-1);
    }
    c3 = max(solve(i+1,j,k),solve(i,j+1,k));

    return max({c1,c2,c3});
}

int main(){

    a=vi(n);
    b=vi(m);

    rep(i,0,n){

        cin>>a[i];
    }

    rep(i,0,n){

        cin>>b[i];
    }

    cout<<solve(0,0,k)<<endl;
    return 0;
}