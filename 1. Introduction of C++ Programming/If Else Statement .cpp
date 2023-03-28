// If Else Statement in C++ 

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

    // 1. Find Maximum by three number 

    int a,b,c ;
    cin>>a>>b>>c;

    int d ;

    if(a>b){
        if(a>c){
            d = a;
        }else{
            d=c;
        }
    }else{
        if(b>c){
        d=b;
        }else{
            d=c;
        }
    }

    cout<<"the biggest out of 3 number is "<<d<<endl;

    //2.Tell that the given number is odd or even . 
     
    int n;
    cin>>n;

    if(n%2==0){
      cout<<"this number is even "<<endl;
    }else if(n%2 != 0){
        cout<<"This Number id Odd"<<endl;
    }else{
        cout<<"this Number id Odd"<<endl;
    }

    return  0 ;
}