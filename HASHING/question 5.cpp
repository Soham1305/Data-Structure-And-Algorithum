//hashing - sliding windows technique 

#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <string> 
#include <map>
#include <bits/stdc++.h>

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)  

using namespace std;


signed main (){

    int n,k;

    cin>>n>>k;

    vi a(n);

    rep(i,0,n){

        cin>>a[i];
    }

    int s= 0;
    int ans=INT_MAX;

    rep(i,0,k){

       s += a[i];
    }

    cout<<s <<endl;

    ans= min(ans,s);

    //sliding window technique 

    rep(i,1,n-k+1){

        s -= a[i+1];
        s += a[i+k-1];
        ans = min(ans,s);
    }

    cout<<ans<<endl;

    return 0;
}
