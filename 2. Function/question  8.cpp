// binary to decimal 

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

const int N = 1e2+5,MOD = 1e9+7 ;

int n;

//int sum =  0;

int Hi(){

  int sum  = 0 ;

  int a = 1 ;

  int y = n; 
  

  while( y){

    int rem= y%10 ;

    y = y /10 ; ;

    sum += rem*a;

    a *= 2 ;

    //y /= 10 ;
  }

  return sum ;
}



int main(){

    cin>>n;

    cout<<Hi()<<endl;

   
    return 0;
}