// maximum and minimum diffrence 

#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <string> 
#include <map>

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)   

using namespace std;

//  you are given an array of A , of n element 

//  you have to remove exactly n.2 elements from array A and add in to 
//  another array B(initially empty ).

//  find the minimum and maximum values of differences between these 
//  two arrays . 

// we define the didderence between these two array as : 
// sigma : abs (A[i] - B[[i]]);

signed main(){

    // the submition of two array of absolute A[i] - B[i];

    // constrains : 1 <= n <= 10 ^ 5 ;
    //              | A | <= 10 ^ 9 ;

    // idia : to maximise absolute of ( A [i]  - A [j]);
    //       1. A[i] shoud be as large as possible ;
    //       2 . A[j] shoud be as small as possible ;

    // For a sorted array : 

    // maximum diff = 

     int n;
     cin>>n;

     vi a(n);

      rep(i,0,n){

        cin>>a[i];
      }

      sort(a.begin(),a.end());

      long long mn =0,mx=0;

      rep(i,0,n/2){

        mx += (a[i + n/2] - a[i]);

        mn +=  (a[2*i+1] - a[2*i]);
      }

      cout<<mn<<" "<<mx<<" "<<endl;

    return 0;
}