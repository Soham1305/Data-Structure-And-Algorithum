// hashing - count frequency of each elwment

#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <string> 

#include <bits/stdc++.h>

using namespace std;


#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)  

signed main(){

    int n;
    cin>>n;

    vi a(n);

    rep(i,0,n){
        cin>>a[i];
    }

    map <int,int> freq;

    rep(i,0,n){

        freq[a[i]]++;
    }

    map<int,int> :: iterator it;

    for ( it=freq.begin();it!=freq.end();it++){

        cout<<it ->ff <<" "<< it-> ss<<endl;
    }

return 0;
}