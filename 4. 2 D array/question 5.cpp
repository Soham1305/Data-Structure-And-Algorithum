// matrix multiplication 

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

const int N = 1e2+5,MOD=1e9+7;

int n,m;
int main(){

    cin>>n>>m;

    vvi a(n,vi(m));

    rep(i,0,n){

        rep(j,0,m){

         cin>>a[i][j];
        }
    }

   return 0;
}