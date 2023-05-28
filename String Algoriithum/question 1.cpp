// string hashing

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

int p = 31;

const int N = 1e5 + 3;
int MOD = 1e9+7;
vi powers(N);

long long calculate_hash(string w){

    long long hash =0 ;

    for(int i = 0;i<w.size();i++){

        hash = ( hash + ( w[i] - 'a' + 1)*powers[i])%MOD;
    }
    return hash;

}

int main(){

    powers[0] = 1;

    rep(i,1,N){
        powers[i] = (powers[i-1]*p)%MOD;
    }

    vector<string> strings = { "aa" , "ab" , " aa" , " b" , " cc" , "aa"};

    // sort(strings.begin(),strings.end());

    // int distinct = 0;

    // rep(i,0,strings.size()){

    //     if( i == 0 || strings[i] != strings[i-1]){
   
    //      distinct ++ ;
        
    //     }
    // }


    //cout<<distinct<<endl;

    vi hashes;

    for( auto w : strings){

        hashes.push_back(calculate_hash(w));
    }

    sort(hashes.begin(),hashes.end());

    int distinct =0;

    for(int i=0;i<hashes.size();i++){

        if( i==0 || hashes[i] != hashes[i-1]){

            distinct ++;
        }
    }

    cout<<distinct<<endl;

    return 0;
}