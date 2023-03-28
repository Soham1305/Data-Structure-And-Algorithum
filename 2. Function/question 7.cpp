// chack the pythagorion triplate is correct or not ;

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

const int N  = 1e2+5,MOD =1e9+7;

bool chack(int &a, int &b , int &c){

    int A = a*a ;
    int B = b*b ;
    int C = c*c ;

    if( A+ B ==C){

        return true ;
    }

     if( A + C ==B){

        return true ;
    }

    if( C + B ==A){

        return true ;
    }

    return false ;

}

int main(){
    int a, b , c ;

    chack(a,b,c);

    if(chack){

        cout<<"true :"<<endl;
    }else{

        cout<<"false :"<<endl;
    }
    return 0 ;
}