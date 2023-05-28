// BIPARTITE GRAPH 
// it's vertices can be divided into two disjoint and 
// independend sets u and v such that every edge connects
// a vertex in U to one in v . 
// the graph does not contain any odd - length cycle . 
// the graph is colrable .

#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <string> 
#include <map>

#define vi vector<int>
#define vvi vector <vi> 
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)   

using namespace std;

vvi adj;
vector<bool> vis ;

vi col;


int n,m;

// traverce the graph .
// if  the current node is of red color , paint it's  neighbours as blur 
// 
// if you are able to color the graph successfully , then 
// the graph is colored . 
 
bool bipart ;

void color(int u,int curr){

    if(col[u] != -1 and col[u] != curr){

        bipart= false;
        return ;
    }
    col[u] = curr;
    if(vis[u]){
        return ;
    }
    vis[u] = true ;

    for(auto i:adj[u]){

        color(i,curr xor 1);

        // 0 xor 1  =  1 ;
        // 1 xor 1  =  0 ;
    }
}
int main(){

    cin>>n>>m;

    adj = vvi (n);

    vis = vector<bool>(n,false);

    col = vi(n,-1);

    bipart = true ;


    rep(i,0,m){

        int u,v;

        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    rep(i,0,n){


     if(!vis[i]){

        color(i,0);

     }
    }

    if(bipart){

        cout<<"THis graph is bipart graph "<<endl;
    }else{

        cout<<"THis graph is not bipart graph "<<endl;
    }

    return 0;
}