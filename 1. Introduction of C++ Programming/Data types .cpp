// data type in c++ 

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

const int N = 1e5+7 ;

int main(){

    int a ;

    cin>>a;

    cout<<" the size of int  is : "<<sizeof(a)<<endl;

    char b ;
    cout<<"the size fo char is :  "<<sizeof(b)<<endl;

    bool c ;

    cout<<"the size of bool is : "<<sizeof(c)<<endl;

    unsigned d;

    cout<<"the size of unsigned is : "<<sizeof(d)<<endl;

    signed e; 

    cout<<"the size of signed is : "<<sizeof(e)<<endl;

    short f ;

    cout<<"the size of short is : "<<sizeof(f)<<endl;

    long long g ;

    cout<<"the size of long long is : "<<sizeof(g)<<endl;


    return 0 ;
}