// convert binatry number into octal number 

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

void C (int n){

    int a[32];

    int i = 0 ;

    while(n){

        a[i] = n % 8 ;

        n = n/8 ;

        i++;
    }

    for(int j = i-1;j>=0;j--){

        cout<<a[j];
    }
}

int main(){

    int n;
    cin>>n;

    C(n);
    return 0;
}