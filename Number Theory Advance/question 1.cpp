// Extended Euclid Algorithum 

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

// ALGORITHUM base idea : 

// ax + by = gcd(a,b);

// gcd(a,b) = gcd ( b, a%b);

// gcd(b,a%b) = bx1 + (a%b)y1;

// a % b = a - (a/b)*b;

// form the above equesiton we get , 

// ax + by = bx1 + ( a%b)y2;

// ax+by= bx1 + ( a - ( a/b) * b);

// ax + by = ay1 + b ( x1 + ( a/b)  - y1);

struct triplate
{
    /* data */
    int x,y,gcd;
    
};

triplate extendedEuclid(int a,int b){

    if( b == 0 ){

     triplate ans;

     ans.y=0;
     ans.gcd=a;
     ans.x=1;

     return ans;
    }

    triplate smallans = extendedEuclid(b,a%b);

    triplate ans ;

    ans.gcd= smallans.gcd;
    ans.x= smallans.y;
    ans.y = smallans.x-(a/b)*smallans.y;

    return ans;
};

int main(){

    int a,b;
    cin>>a>>b;

    triplate ans = extendedEuclid(a,b);

    cout<<ans.gcd<<" "<<ans.x<<" "<<ans.y<<" ";

   return 0;
}