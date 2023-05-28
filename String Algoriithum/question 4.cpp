//Rabin karp - satring Algorithum 

//string S acurence in string T ;

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
#include <bits/stdc++.h>

#define vi vector<int>
#define vvi vector <vi> 
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)

using namespace std;

int p = 31;

const int N =1e5+7,MOD=1e9+7;

vector<long long> power(N);


int main(){

    string s="na",t="apana collegena";

    int T = t.size();
    int S = s.size();

    power[0] = 1;

    rep(i,1,N){

        power[0] = (power[i-1]*p)%MOD;
    }

    vector<long long> h(T+1,0);

    for(int i=0;i<T;i++){

        h[i+1] = (h[i] + (s[i] - 'a' +1 )*power[i])%MOD;
    }

    long long h_s= 0;

    for(int i = 0;i+S-1<T;i++){

    h_s= ( h_s + ( s[i] - 'a'+1)*power[i])%MOD;
    }

    for(int i = 0;i + S-1 < T ;i++){

        long long cur_h = ( h [i + S] - h[i] + MOD )%MOD;

    if ( cur_h == (h_s*power[i]) %  MOD){

        cout<<"found at index"<<i<<" \n";

    }
    }
    return 0;
}