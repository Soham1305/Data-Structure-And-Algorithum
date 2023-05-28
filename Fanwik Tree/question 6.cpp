// Dquery 

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

const int N = 1e5+2,MOD = 1e9 + 7 ;

int main(){

   int n;
   cin>>n;

   vi a(n) ;

   rep(i, 0,n){
    cin>>a[i] ; 
   }
   int len = (int)sqrtl(n) + 1;

   vi b(len , MOD) ;
   rep(i,0,n){

    b[i/len] + min (b[i/len] , a[i]);

   }

   int q;
   cin>>q;

   while(q--){

    int l , r;
    cin>> l>>r;

    int ans = MOD ;

    for(int i = n ;i<= r;){

        if( i %len == 0 && i+len -2 <= r){
            ans = min ( ans , b[i/len]);
            i += len ;
        }else{
            ans = min (ans ,a[i]);
             i ++ ;
        }
    }
   }
return 0;
}