// interactive problem in c++ and java and python 
// ONLINE JUGGE ;

// flushing the input is impotant ; TO AVOID BUFFER ;

// Guess the Number ! 

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

int p = 31;

const int N =1e5+7,MOD=1e9+7;

vector<long long> power(N);

int main(){
  
    int lo = 1; int hi = 1000000;

    int ans = -1 ;

    while( lo <= hi ){

        int mid = (hi + lo)/2;

        cout<<mid <<endl;

        string s;cin>>s;

        if( s == " <"){

            hi = mid - 1;
        }

        else{

            ans = max(ans , mid);

            lo = mid + 1;
        }
    }

    cout<<" ! "<<ans <<endl;
    cout<<flush<<endl;
    return 0;
}