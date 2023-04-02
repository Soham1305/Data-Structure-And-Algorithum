// introduction to loops ;
// sum of all previous number 

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

int recersive(int n ){
    if(n==0){
        return 0 ;
    }

    return n+recersive(n-1);
}
int main(){

    int n;
    cin>>n;

    int sum = 0 ;

    for(int i =1 ;i<n+1;i++){

     sum += i ;
    }

    cout<<sum<<endl;

    cout<<recersive(n)<<endl;

    return 0 ;
}