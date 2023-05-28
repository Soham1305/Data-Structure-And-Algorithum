// Kadane Algorithum 

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

//maintain w two variable (1) . cur , (2) max till now  = 0;
// initialize them with 0;
// itrate from 0 to n-1 and now 1. cur += a[i ] and max = max(max,cur);
// int this step we ingnor this element that contoirbute the nagetive sum in out max sum and cur was increse 
// when loop end output max till now 

 int main(){

    int n;
    cin>>n;

    vi a(n);

    rep(i,0,n){

        cin>>a[i];
    }

    int cur =0,maxtillnow=0;

    rep(i,0,n-1){

        cur +=a[i];

        maxtillnow= max(maxtillnow, cur);

        if(cur<0){

         cur = 0;
        }
    }

    cout<<maxtillnow<<endl;

    return 0;
 }