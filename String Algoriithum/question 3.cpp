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

vi prefix_function(string s){
    int n = s.size();
    vi pi(n,0);

    for(int i = 1;i<n;i++){

        int j = pi[i-1];

        while( j> 0 and s[i] != s[j]){
            j = pi[j-1];

            if( s[i] == s[j]){

                j++;
            }
            pi[i] = j;
        }
    }
}

int main(){

    string s="na";

    vi res = prefix_function(s);
    for(auto i : res){

        cout<<i<<" ";
    }
    cout<<endl;

    string t = "apanacollegena";

    int pos = -1;

    int i(0),j(0);

    while( i < t.size()){

        if( t[i] == s[j]){

            j++;
            i++;
        }else{

            if( j!= 0){
                j = res[j-1];
            }else{
                i++; 
            }
        }if(j== s.size()){
         
          pos = i-s.size();
          break;
        }
    }
    
    cout<<pos<<endl;


    return 0;
}