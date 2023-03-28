// make a simple calculator 

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

const int N = 1e5+5 ,MOD = 1e9+ 7 ;

int a, b ;

void sum(){

  cout<<a+b<<endl;
}

void division(){

    cout<<a/b<<endl;
}

void sub(){

    cout<<a-b<<endl;
}

void multi(){

    cout<<a*b<<endl;
}

int main(){
   cin>>a>>b;

  // cout<<"give a number between 0 to 3 where : "<<endl;

   //cout<<" 0 -- > sum , 1 -- > division , 2 -- > mul , 3 --> sub"<<endl;

   int n;
   cin>>n;

   if(n == 0 ){
    sum();
   }
   
   if(n == 1 ){
    division();
   }

   
   if(n == 2 ){
    multi();
   }
   
   
   if(n == 3 ){
    sub();
   }
   if( n> 3 ){

    cout<<"please enter a  valide number "<<endl;
   }
  return 0;
}