// Multiplicative Modulo Inverse ( Number theory Advance )


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

// ( A * B ) % m = 1;

// gcd ( A , m ) = 1; ( coprime );

//  A * B =  1 ;

// (  A * B - 1) = 0 

// -- > A * B -1 = mq  

// -- >  A + B + mQ = 1 ;

// using Extended Euclid Algorithum  : 

// ax + by = gcd (a , b);     // where a is givem and m is b ;



struct triplat
{
    /* data */
    int x,y,gcd;
};

triplat sove2(int a, int b){

    if( b == 0 ){

        triplat ans ;

        ans.x = 1;
        ans.y= 0;
        ans.gcd =a;

        return ans ;
    }

    triplat smallans = sove2 ( b , a%b);

    triplat ans;

    ans.x = smallans.y;

    ans.y = smallans.x - ( a/b )*smallans.y;

    ans.gcd = smallans.gcd;

    return ans;
}

int solve(int a , int m ){
    
    triplat temp = sove2(a,m);

    return temp.x;

}

int main(){

    int a,m;
    cin>>a >>m;

    
    cout<<solve(a,m)<<endl;

    return 0;
}