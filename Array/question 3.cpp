// binary search using recersion 

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

const int N = 1e5+2,MOD = 1e9+7;

int n,s,e;

bool B ( vi &a,int &key,  int s ,int e){

   if( s >=e){

     return false ;
   }
   
   int mid= (s+e) / 2 ;

   if( mid == key ){

    return true ;
   }

   if( key < mid){

    B ( a,  key , s,mid - 1);
   }

   if( key > mid ){

    B( a ,key  , mid +1, e);
   }
    
}

int main(){

    cin>>n;
    
    int key ;
    cin>>key ;

    vi a(n);
    

    rep(i,0,n){

        cin>>a[i] ;
    }

    int s=0,e=n-1;

    
    B(a,key  ,s ,e );

    if(B){

        cout<<"element is found"<<endl;
    }else{

        cout<<"element is not found in this perticular arry "<<endl;
    }


    return 0;
}