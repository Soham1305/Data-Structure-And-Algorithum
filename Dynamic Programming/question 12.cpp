// O(N) knapsack problems 
// keep eye on this question approch 


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

const int N = 1e2+2;

int MOD = 1e9+2;

int dp[N];


int main(){

    int n;
    cin>>n;

    int w;
    cin>>w;

    vi v(n);

    vi wi(n);

    rep(i,0,n){
        
        cin>>v[i];
    }

    rep(i,0,n){

        cin>>wi[i];
    }

    memset(dp,0,sizeof dp);
    rep(j,0,w){

        rep(i,0,n){

        if( j - wi[i] >= 0){

        dp[j] = max(dp[j],v[i]+dp[j-wi[i]]); 
        }

        }
    }

    cout<<dp[n]<<endl;

    return 0;
}