// hexadicimal to decimal 

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

const int N = 1e5+2,MOD= 1e9+7 ;

string s ;

int Hello(){

    int sum = 0 ;

    int n = s.size();

    int x = 1;

    for(int i = n-1;i >=0;i--){

        if(s[i] >= '0'  && s[i] <= '9' ){
      
         sum += (s[i] - '0')*x;

         x *= 16 ;
            
        }

        if( s[i] >= 'A' && s[i] <= 'F'){

            sum += (s[i]-'A'+10)*x;

            x *= 16 ;
        }
    }

    return sum ;
}

int main(){

    cin>>s;

    cout<<Hello()<<endl;

    return 0;
}