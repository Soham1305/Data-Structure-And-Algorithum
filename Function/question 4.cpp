// find the armstorng number 

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

const int N = 1e5+5,MOD = 1e9+7;
int n;

bool A(){

    int sum = 0 ;
    while( n>0){

        int rem = n%10 ;
        
        sum = sum +rem*rem;

        n /= 10 ;
    }
    if( n == sum ){

        return true ;
    }

    return false ;
}

int main(){
    
    cin>>n;

    A();

    if(A){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    return 0;
}