// coin change problem using Dynamic progrmming

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


//const int N = 1e3 + 2 ;
//
//int dp[N][N];
//
//int coin(vi &a,int n,int x){
//
//    if(x==0){
//
//        return 1;
//    }
//    if(x<0){
//        return 0;
//    }if(n<=0){
//
//        return 0;
//    }
//    if(dp[n][x] != -1){
//
//        return dp[n][x];
//    }
//
//    dp[n][x]= coin(a,n,x-a[n-1]) + coin(a,n-1,x);
//
//    return dp[n][x];
//}
//
int main(){

    int n;
    cin>>n;

   // rep(i,0,N){
   //     rep(j,0,N){
//
   //         dp[i][j] = -1;
   //     }
   // }

//int a[n];

   vi a(n);

   int x; 
   cin>>x;

   rep(i,0,n){

       cin>>a[i];
   }

  // cout<<coin(a,n,x)<<endl;

  vvi dp(n+1,vi(x+1,0));

  dp[0][0] = 1;

  rep(i,1,n+1){

    rep(j,0,x+1){

        if(j-a[i-1] >= 0){

            dp[i][j] += dp[i][j-a[i-1]];
        }

        dp[i][j] += dp[i-1][j];

    }
  }

  cout<<dp[n][x]<<endl;

    return 0;
}