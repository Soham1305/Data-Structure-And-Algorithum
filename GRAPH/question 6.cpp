// find cycle in dircted graph 

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

bool iscycle(int  src,vvi &adj,vector<bool> &vis,vi &stack){

   stack[src] = true ;

   if(!vis[src]){

    vis[src] = true ;

    for(auto i : adj[src]){
        if(vis[i] and iscycle(i,adj,vis,stack)){
            return true;
        }
        if (stack[i]){

            return true ;
        }
    }
   }

   stack[src] = false ;

   return false ; 

}


int main(){

    int n,m;

    cin>>n>>m;

    vvi adj(n);

    rep(i,0,m){

        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
    }

    bool cycle = false ;

    vi stack(n,0);

    vector<bool> vis(n,0);


    rep(i,0,n){

        if(!vis[i] and iscycle(i,adj,vis,stack)){

          cycle = true ;
        }


    }

    if(cycle){

        cout<<"THE cycle is present in graph "<<endl;
    }else{
        cout<<"THERE is no cycle is present in graph "<<endl;
    }

    return 0;
}