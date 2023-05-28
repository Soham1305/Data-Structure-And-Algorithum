//Binary Exponentiation 

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
#define int long long


using namespace std;

int MOD = 1e9+7;

const int N = 1e5+2;

int p2( int a,int n){

 if ( n== 0){

    return 0;
 }
 int p = (p2(a ,  n/2) %MOD );
 
 if( n &1 ){
    return (((p*p)%MOD)*a)%MOD;
 }else{
    return (p*p)%MOD;
 }
}

int p(int a,int n){

    int ans=1;

    while( n > 0){

        if( n & 1){

            ans = ( ans * a) % MOD;
        }
        a = (a*a)%MOD;
        n = n>>1;
    }
    return ans;
}


int32_t main(){

    int a,n;
    
    cin>>a>>n;

    cout<<p(a,n)<<endl;

    return 0;
}