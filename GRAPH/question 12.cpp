// Bellman ford triangle 

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

const int INF = 1e7;

int main(){

    int m,n;

    cin>>m>>n;

    vvi edges ;

    rep(i,0,m){

        int u,v,w;
        cin>>u>>v>>w;

        edges.push_back({u,v,w});
    }

    int source ;
    cin>>source;

    vi dist(n,INF);

    dist[source] = 0 ;

    for(int it= 0; it<n-1;it++){

        for(auto e : edges){

            int u = e[0];

            int v = e[1];

            int w = e[2];

            dist[v] = min(dist[v] , w + dist[u]);
        }
    }

    for(auto i : dist){

        cout<<i<<" ";
    }

    cout<<endl;

    return 0; 


}