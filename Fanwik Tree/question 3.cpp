// squer root de componsetion 

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

int const N = 1e5 + 2,MOD = 1e9 + 7;

int main(){

    int n;
    cin>>n;

    vi a(n);
    for(int i  =  0;i<n;i++){
        cin>> a[i] ;
    }
    int len = sqrt(n) + 1;
    vi b(len);

    rep(i, 0, n){
    b[i/len] += a[i];
    }

    int q;
    cin>>q;
    while(q--){

        int l  , r;
        cin>>l,r;

        l--,r--;
        int  sum =  0;

        // because 1 base idx to 0 base idx
        for(int i = l;i<=r;){

            if( i % len == 0 && i + len-1 <= r){

                sum += b[i/len];
                i += len ;
            }else{

                sum += a[i];

                i++;
            }
        } 

        cout<<sum<<endl;
    }

    return 0;
}