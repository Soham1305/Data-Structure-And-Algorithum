// insersion sort 

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

const int N = 1e2+5, MOD = 1e9+7 ;

int n;

int main(){
    
    cin>>n;

    vi a(n);

    rep(i,0,n){
        cin>>a[i];
    }

    int i , j ,key ;

    for(int i = 1 ;i<n;i++){

        key = a[i];
        j= i-1;

        while( j>= 0 && a[j] > key){

            a[j+1] = a[j];

            j = j-1;
        }

        a[j+1] = key ;
    }

    rep(i,0,n){

        cout<<a[i]<<" ";
    }
    return 0;
}