// bubble sort 

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

const int N = 1e5+2,MOD = 1e9 + 9 ;

int n;

void Hi ( vi &a ){

    rep(i,0,n-1){

       // int m = i;

        rep(j,0,n-i-1){

           if(a[j] > a[j+1]){

            swap(a[j],a[j+1]);
           }
        }
    }

    return ;
}

int main(){

    cin>>n;

    vi a(n) ; 

    rep(i,0,n){

        cin>>a[i];
    }

    Hi(a);

    cout<<"the sorted array is : "<<endl;

    rep(i,0,n){

        cout<<a[i]<<" ";
    }

    return 0;
}