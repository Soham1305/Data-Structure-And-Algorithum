//spilar trivarasal 

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

const int N = 1e2+5,MOD = 1e9+7;

int n,m;

int main(){

    cin>>n>>m;

    vvi a(n,vi(m));
    

    rep(i,0,n){

        rep(j,0,m){

          cin>>a[i][j];
           
        }
    }

    int row_start=0,col_start=0,row_end=n-1,col_end=m-1;

    while(row_start<=row_end && col_start <= col_end){
        
        
        for(int col=col_start;col<=col_end;col++){

            cout<<a[row_start][col]<<" ";
            
        }
        row_start++;

        for(int row=row_start;row<=row_end;row++){

            cout<<a[row][col_end]<<" ";
           
        }
         col_end--;

        for(int col=col_end;col>=col_start;row_end--){
            cout<<a[row_end][col]<<" ";
            
        }
        row_end--;

        for(int row=row_end;row>=row_start;row_end--){

            cout<<a[row][col_start];
           
        }
         col_start++;

    }

    return 0;
}