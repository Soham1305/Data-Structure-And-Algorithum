// friend's paring problem using dynamic programming 

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

int dp[N];

int main(){

    int n;
    cin>>n;

    vi a(n);

    rep(i,0,n){

        cin>>a[i];
    }

    dp[0] = 1;

    dp[1] = 1;

    rep(i,2,n+1){

        dp[i] = dp[i-1] + (i-1)* dp[i-2] ;
    }

    cout<<dp[n]<<endl;

    return 0;
}