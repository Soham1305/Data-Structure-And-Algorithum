// substring algorithum 

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

int main(){

    string s = "na";

    string t = "apna collegena";

    int S = s.size(); int T = t.size();

    for(int i= 0;i<T-S+1;i++){

       if (t.substr(i,S) == s){

        cout<<"Found at index"<<i <<" ";
       }
    }

    return 0;
}
