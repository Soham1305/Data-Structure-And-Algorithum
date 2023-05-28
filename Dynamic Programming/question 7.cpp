// minimum jups to reaches the end ;
// code 404 for output keep eye on this topic ;

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

// greedy solution is far batter then DP solition it's time complexity is O(n);

// in DP time complexity is O(n^2);

const int N = 1E3 +2;

int MOD = 1e9+3;

signed main(){

    int n;
    cin>>n;

    vi a(n);

    rep(i,0,n){

        cin>>a[i];
    }

    vi jumps(n,MOD);

    if(a[0] == 0){

        cout<<MOD<<" ";

        return 0;
    }

    for(int i=1;i<n;i++){

        for(int j=0;j<i;j++){

            if(i <= (j+a[j])){

                jumps[i] = min(jumps[i] , jumps[j] +1);
            }
        }
    }


    cout<<jumps[n-1]<<endl;

    return 0;
}