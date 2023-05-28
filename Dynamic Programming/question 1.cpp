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

//void main(int y){
//
//    int n;
//    cin>>n;
//
//    vi d(n+1);
//
//    d[0] = 0;
//    d[1] = 0;
//    d[2] = 1;
//
//    for(int i=3;i<=n;i++){
//
//        d[i] = d[i-1] + d[i-2];
//    }
//
//    cout<<d[n]<<endl;
//
//    return ;
//}

int main(){
    int n;
    cin>>n;

    vi a(n+1) ;

    a[0]  = 0;
    a[1] = 0; 
    a[2] = 1 ;

    for(int i = 3 ;i<= n;i++){

        a[i] = a[i-1] + a[i- 2] ;

    }

    cout<<a[n]<<endl;

    return 0;
}