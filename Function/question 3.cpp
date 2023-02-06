// find  if the number is prime number or not 

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

const int N = 1e2+5,MOD = 1e9+7;

int n;

bool Hi(){
    
    if(n == 2){

        return true ;
    }

    rep(i,3,n){

        if( n%i ==0 ){
            return false ;

        }
    }

    return false ;
}

int main(){

    cin>>n;

    Hi();

    if(Hi){
        cout<<"Prime"<<endl;
    }else{
        cout<<"not Prime"<<endl;
    }
    
    return 0;
}