// max till i 

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

const int N=1e2+5,MOD=1e9+7;

int n;

int main(){

    cin>>n;

    vi a(n);

for(int i = 0 ;i<n;i++){
        cin>>a[i]; 
    }

int max_num = INT_MIN;

for(int i = 0;i<n;i++){

    max_num=max(max_num,a[i]);
}

cout<<max_num<<endl;
return 0;

}