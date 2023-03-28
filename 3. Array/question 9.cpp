// longest comman continoues array (asked in google interview)

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

rep(i,0,n){
    cin>>a[i];
}

int j = 2;
int max_array= 2;

int i = 1 ;

int df= a[i]-a[i-1];

int ans = INT_MIN;

while(j<n){

    if( df == a[j] - a[j-1]){
        max_array++;
    }
    else{
        df = a[j] - a[j-1];
        max_array = 2;
    }

    ans = max(ans , max_array);
    j++;

}

cout<<ans<<endl;

return 0;
}