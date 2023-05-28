// Matrix chain maultiplication 


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


const int N = 100 ; int MOD = 1e9+7;

int a[N];

int dp[N][N];

int mcm(int i,int j){

    if(i == j){

        return 0;
    }

    if(dp[i][j] != -1){

        return dp[i][j];
    }

    dp[i][j] = MOD  ;

    

    rep(k,i,j){

        dp[i][j]  = min(dp[i][j], mcm(i,k) + mcm(k+1,j) +a[i-1]*a[k]*a[j]);
    }

    return dp[i][j];

    
}



signed main(){

    memset(dp,-1,sizeof dp);

    int n;
    cin>>n;

    rep(i,0,n){

        cin>>a[i];
    }

    cout<<"the minimuum operation are reqouried is " <<mcm(1,n-1)<<endl;

    

    return 0;
}