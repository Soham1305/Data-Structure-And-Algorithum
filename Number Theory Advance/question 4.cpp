// Boring factorials ( Advance Number theory )

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

int power(int x,int y,int p){

    int res= 1;

    x  = x%p;
    while( y> 0){
        if(y&1){

            res= (res*x )%p;
        }
        y = y>>1;
        x= ( x*x) %p;
    }

    return res;
}

int inv(int i,int p){
      
    return power(i,p-2,p);

}

int modfcat(int n,int p){

    if( p<= n){

     return 0;
    }

    int res = p-1;
    rep(i,n+1,p){

        res= (res* inv(i,p))%p;
    }
    return res;
}


unsigned main(){

    int n,p;
    cin>>n>>p;

    cout<<modfcat(n,p)<<endl;

    return 0;
}