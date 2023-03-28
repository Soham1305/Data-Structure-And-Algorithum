// smallest positive number missing in given arrray 


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

const int N = 1e5+2,MOD=1e9+7 ;

int n;

int main(){

    cin>>n;

    vi a(n);

    rep(i,0,n){

        cin>>a[i];
    }

    vector<bool> b(0,N);

    rep(i,0,n){
        if(a[i] >= 0){
      b[a[i]] == true;}
    }

   int ans = 0 ;

    rep(i,1,N){

        if(b[i] == false){
          ans = i ;
          break;
        }
    }

    cout<<ans<<endl;

    return 0;
}