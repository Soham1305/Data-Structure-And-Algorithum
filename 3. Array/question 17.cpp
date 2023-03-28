// maximum subarray sum in ciculaer array 

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

const int  N = 1e2+5,MOD = 1e9+7 ;

int n;

int kadane(vi a,int n){
    
    int cursum=0;
    
    int maxsum = INT_MIN;

    for(int i= 0;i<n;i++){

        cursum += a[i];

        if( cursum <0){

            cursum = 0;
        }
        maxsum = max(maxsum , cursum);
    }
    return maxsum ;
}

int main(){

    cin>>n;

    vi a(n);

    for(int i = 0 ;i<n;i++){

        cin>>a[i];
    }

    int wrapsum ,nonwrapsum ;

    nonwrapsum = kadane(a,n);

    int totalsum = 0;

    for(int i = 0 ;i<n;i++){

        totalsum += a[i];

        a[i] = -a[i];
    }

    wrapsum=totalsum + kadane(a,n);

    cout<<max(wrapsum,nonwrapsum)<<endl;

    return 0;
}