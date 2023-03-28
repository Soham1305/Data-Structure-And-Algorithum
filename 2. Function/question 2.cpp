// using function ( recursion ) ;

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

const int N = 1e2+5,MOD = 1e9+7;

int n;

int F(int n){

    if( n == 0 ){

        return 0 ;
    }
    if( n == 1){

        return 0 ;
    }

    if( n == 2){

      return 1 ;
    }

    return F(n-1)+F(n-2) ;
}


int main(){
    
    cin>>n;

    cout<<F(n)<<endl;
    return 0;
}