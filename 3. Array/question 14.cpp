// print all subarray and maximum subarry sum

// time complexity : O(n^3);

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

const int N = 1e2+5,MOD = 1e9+7 ;

int n;

int main(){

    cin>>n;

    vi a(n);

    rep(i,0,n){

        cin>>a[i];
    }

    int max_sum =  0 ;

    for(int i = 0 ;i<n;i++){

        for(int j = i;j<n;j++){
            
            int sum = 0;

            for(int k = i ;k<=j;k++){

            sum += a[k];
            cout<<a[k]<<" ";
            }
            cout<<endl;
            max_sum = max(max_sum , sum );
        }
    }

    cout<<max_sum<<endl;

    return 0;
}