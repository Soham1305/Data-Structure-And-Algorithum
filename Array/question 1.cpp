// liner serching 

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

const int N = 1e5+2,MOD = 1e9+9;

int n;

bool chack(vi &a , int key){

    rep(i,0,n){
    
    if(a[i] == key){
        return true;
    }
    }
    return false;
}

int main(){

    cin>>n;
    int key ;
    cin>>key ;

    vi a(n);

    rep(i,0,n){

        cin>>a[i] ;
    }

    chack(a,key);

    if(chack){

        cout<<"element is found"<<endl;
    }else{

        cout<<"element is not found in this perticular arry "<<endl;
    }
    return 0;
}