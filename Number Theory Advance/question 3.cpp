// Euler Titient Function 

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

// Euler Totient Function : 

// Represent as ↀ(n) ;  --> 1 <= m <n;

// number of numbers from 1 to n-1 which are coprime with n ;

// ↀ( n ) = n* (1 - 1/p1)*( 1 - 1/p2)*( 1 - 1/p3)...* ( 1 - 1/pk);

// where p1,p2,p3...pk are ditinct prime factors of n;

const int N = 1e5+2; int MOD= 1e9+7;

int totient[N];


int main(){
   
    rep(i,0,N){

        totient[i] = i ;
    }

    rep( i,2,N){

        if( totient[i] == i){

            for(int j=2*i;j<N;j+=i){

                totient[j] *= i-1;
                totient[j] /= i;
            }

            totient[i] = i-1;

        }
    }

    int n;
    cin>>n;

    rep(i,2,n){

        cout<<totient[i]<<" ";
    }

    cout<<endl;


    return 0;
}