// maximum lenght of bitonic subsequence 

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
#include <bits/stdc++.h>

#define vi vector<int>
#define vvi vector <vi> 
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)

using namespace std;

// a subsequnce is boitonic first if is stricly incresig and after that it will decreasing 

int main(){

    int n;
    cin>>n;

    vi a(n);

    rep(i,0,n){

        cin>>a[i];
    }

    vi forward(n,1),backword(n,1);

    rep(i,0,n){

        rep(j,0,i){

            if(a[i] > a[j]){

                forward[i] = max(forward[i] , 1+ forward[j]);
            }
        }
    }

    for(int i=n-1;i>=0;i--){

        for(int j=n-1;j> i ;j--){

            if(a[i] > a[j]){


                backword[i] = max ( backword[i] , 1+ backword[j]);
            }
        }
    }

    int ans = 0;

    rep(i,0,n){
   
      ans = max(ans, forward[i] + backword[i] - 1);

    }

    cout<<ans<<endl;
    return 0;
}