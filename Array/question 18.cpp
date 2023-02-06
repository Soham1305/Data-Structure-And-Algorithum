// pirnt given subarray sum starting and ending element 

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

const int N = 1e2+5,MOD=1e9+7;

int n;


void H(vi a,int n,int k){

    int st=0,en=n-1;

    for(int i= 0;i<n;i++){

        if(a[st] + a[en] == k){

        cout<<st+1<<" "<<en+1<<" "<<endl;
        return ;
        }
        
        if(a[st] + a[en] > k){

        en--;
        }
        
        if(a[st] + a[en] < k){

        st++;
        }
        
    }
}

int main(){

cin>>n;

int k ;

cin>>k;

vi a(n)  ; 

for(int i= 0;i<n;i++){

    cin>>a[i];
}

H(a,n,k);

return 0;
}