// optimal game stregy 

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
int MOD = 1e9+7;

vi a;

int dp[100][100];

int game(int i,int j){

    if ( i == j ){

        return i;
    }

    if( i >  j){

        return 0;
    }

    if(dp[i][j] != -1){
        
        return dp[i][j];
    }

    int l = a[i] + min(game(i+1,j-1) , game(i+2,j));

    int r = a[j] + min( game(i,j-2) ,game(i +1, j-1));

    return dp[i][j] = max(l,r);
}
signed main(){

    memset(dp,-1,sizeof dp);
   
   int n;
   cin>>n;

  a = vi(n);

  rep(i,0,n){
    cin>>a[i];
  }

   cout<<game(0,n-1)<<endl;

    return 0;
}