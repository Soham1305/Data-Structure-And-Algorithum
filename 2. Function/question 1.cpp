// reverse a number 

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

int const N = 1e5+2,MOD = 1e9+9;

int n;

int Hi(int &n){

    int sum = 0 ;

    while(n>0){

        int rem  = n%10 ;

        sum = sum*10 + rem ;

        n /= 10 ;
    }

    return sum ;
}

int main(){

   cin>>n;

   cout<<Hi(n)<<endl;
   

    return 0;
}