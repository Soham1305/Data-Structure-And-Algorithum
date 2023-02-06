//  sum of all subarray 

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

int main(){
    cin>>n;

    vi a(n);

    rep(i,0,n){

        cin>>a[i];

    }

    int sum = 0,temp = 0;

    rep(i,0,n){

        temp = 0 ;

        rep(j,i,n){
            
            

            temp+=a[j];

            sum += temp;
            if(temp == 0 ){
                break;
            }
            //cout<<temp<<endl;
        }
    }

    cout<<sum <<endl;
    return 0;
}