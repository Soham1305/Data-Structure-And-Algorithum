// 01 knapsapk problem 

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

// knapsak problem ;

const int N = 1e3 + 2 ; int MOD = 1e9+7 ;

int dp[N][N];

int val[N],wi[N];

int knap(int n,int w){

   if(w<=0){

    return 0;
   }

   if(n<=0){

    return 0;
   }

   if(dp[n][w] != -1){

    return dp[n][w];
   }

   if(wi[n-1] > w){
    dp[n][w] = knap(n-1,w);
   }else{

    dp[n][w] = max(knap(n-1,w),knap(n-1,w-wi[n-1])+val[n-1]);
    }

    return dp[n][w];
}

signed main(){

    int n;
    cin>>n;

    rep(i,0,N){

        rep(j,0,N){

            dp[i][j] = -1;
        }
    }

    rep(i,0,n){

        cin>>val[i];
    }

    rep(i,0,n){

        cin>>wi[i];
    }

    int w;
    cin>>w;

    cout<<knap(n,w)<<endl;
    
    return 0;
}