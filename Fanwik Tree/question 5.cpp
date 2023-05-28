// MO's Algorithum 

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
int rootN;

const int N = 1e5 + 2, MOD = 1e9+ 7;

struct Q
{
    /* data */
    int idx,l,r ;

};
Q q1[N];



int main(){

    int n;
    cin>>n;

    vi a(n) ;
    rep(i, 0 ,n){
        cin>>a[i] ;

    }
    rootN = sqrtl(n);

    int q;
    cin>>q;

  for(int i = 0;i<q;i++){
    
    int l ,r;
    cin>>l>>r;
    q1[i].l = l ;
    q1[i].r = r;
    q1[i].idx = i;
  }

  sort(q1, q1+q,compare);

    return 0;
}