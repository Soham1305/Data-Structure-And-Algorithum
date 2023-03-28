// maximum subarray sum 

// time complexity : O(n^2);

// space complexity : O(1);

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

const int N = 1e2+5,MOD=1e9+7;

int n;


int main(){
    
    cin>>n;

    vi a(n);

    for(int i = 0;i<n;i++){

        cin>>a[i];
    }

    int cursum[n+1];

    cursum[0]=0;

    rep(i,1,n+1){

    cursum[i] = cursum[i-1] +a[i-1];
    }

    int maxsum = INT_MIN;

    for(int i = 1 ;i<=n;i++){

        int sum =0;

        maxsum = max(maxsum,cursum[i]);

        for(int j = 1;j<=i;j++){

            sum = cursum[i]-cursum[j-1];
            maxsum =max(maxsum,sum);
        }
    }

    cout<<maxsum<<endl;

    return 0;
}