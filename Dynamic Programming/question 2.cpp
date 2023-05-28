// minimum numbers of squre whose sum is equal to given number 

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

const int N = 1e5+ 2; int MOD = 1e9 + 7;

int dp[N];

int mIn(int n){

    if(n==1 || n==2 || n==3 || n==0){

        return n;
    }

    if(dp[n] != MOD){
        return dp[n];
    }

   // int ans= MOD;
    for(int i=1;i*i<=n;i++){
        dp[n] = min(dp[n],1+mIn(n-i*i));
    }

    return dp[n];
}

int main(){

   rep(i,0,N){

    dp[i] = MOD ;
   }
    int n;
    cin>>n;

    cout<<mIn(n)<<endl;
    
    return 0;
}