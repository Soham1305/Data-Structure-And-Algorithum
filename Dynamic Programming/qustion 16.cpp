// UGly numbers 

// using Dynamic Programming 
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

//const int N = 1e3+2;

//int dp[N];

int main(){
   
   int n;
   cin>>n;

   int c2(0),c5(0),c3(0);


   vi dp(n+1);

   dp[0] = 1;

   
   rep(i,1,n+1){

    
    dp[i] = min({2*dp[c2], 3*dp[c3],5*dp[c5]});

    if(2*dp[c2] == dp[i]){

        c2++;
    }
    if(3*dp[c3] == dp[i]){

        c3++;
    }
    if(5*dp[c5] == dp[i]){

        c5++;
    }

    
   }

   cout<<dp[n-1]<<endl;

    return 0;


}