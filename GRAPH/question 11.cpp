//Minimum Spanning Tree using Prims Algorithum ;

// Let 1 connect with 2 (1-2) so here parent [2] is 1 that tell us 2 connected with 1, 
//further if a vertex 3 is connected with 2 here  parent of 3 is 2 and parent of 2 is 1
// as we see earlier.
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

const  int N = 1e5 + 3;

const int INF = 1e9 ; 
vvi g(N);

vector<bool> vis(N);

vi parent(N),dist(N);

void primsMST(int source ){

rep(i,0,m){

    dist[i] = INF ;
}

set<vi> s;


}

int main(){

    int n,m;
    cin>>n>>m;

    rep(i,0,m){

        int u,v,w;
        cin>>u>>v>>w;

        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }

    primsMST(0);

    return 0;
}
