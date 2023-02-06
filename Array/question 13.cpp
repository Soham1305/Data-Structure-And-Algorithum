// subarray with given sum  

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

const int N = 1e6+5,MOD = 1e9+7;

int n;

int main(){

    cin>>n;

    int s ;
    cin>>s;

    vi a(n);

    for(int i = 0 ;i<n;i++){
        cin>>a[i];
    }

    int i = 0,j=0,st=0,en=0,sum =0;

    while(j<n && sum+a[j] <=s){

        sum += a[j];
        j++;
    }
    if(sum== s){

        cout<<i+1<<" "<<j+1<<endl;
    }

    // this is for testing 

    while(j<n){

        sum += a[j];

        while( sum >s){
            sum -=a[i];
            i++;
        }
        if( sum == s){
            st = i+1;
            en = j+1;

           cout<<st<<" "<<en<<" ";
        }
    }

    return 0;
}