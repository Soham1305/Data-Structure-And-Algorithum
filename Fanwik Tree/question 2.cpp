// count conversion 
//  using binary inverce tree
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

const int N = 1e5 + 2, MOD = 1e9 + 7;

vi bit ;

int getsum(int idx){

    int sum = 0;

    while( idx > 0 ){

     sum += bit[idx];
  
     idx -= idx & ( -idx);

    
    }

  return sum; 
}

void update(int n, int idx,int inc){

    while( idx <= n ){
        bit[idx] += inc;
        idx += idx & ( -idx );
    }
}
int main(){

   int n;
   cin>>n;

   vi a(n);

   rep(i,0,n){
    cin>>a[i];
   }
   vi temp = a;

   sort(temp.begin(),temp.end());

   rep(i,0,n){

    a[i] = lower_bound(temp.begin(),temp.end(),a[i]) - temp.begin() +1;
   }

   bit = vi (n+1);

   int inv=0;

   for(int i = n-1;i>=0;i--){

    inv += getsum(a[i] -1 );
    update(n,a[i] ,1);
   }

    return 0;
}