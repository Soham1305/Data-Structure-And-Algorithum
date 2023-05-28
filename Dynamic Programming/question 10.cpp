// lis (longest increaseing subsequence )

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

const int N = 1e3+2;

int MOD =1e9+2;

int dp[N];

int lis(vi &a,int n){
    

    if(dp[n] != -1){

        return dp[n];
    }

    dp[n] = 1 ;// singal element is also an LIS;

    rep(i,0,n){

        if(a[n] > a[i]){

            dp[n] = max( dp[n] , 1 + lis(a,i));
        }
    }

    return dp[n];

}

int main(){

    memset(dp,-1,sizeof dp);

    

    int n;
    cin>>n;

    vi a(n);

    rep(i,0,n){

        cin>>a[i];
    }

    cout<<lis(a,n-1)<<endl;

    return 0;
}