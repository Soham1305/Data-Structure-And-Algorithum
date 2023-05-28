// cycle detection in graph 

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

const int N = 1e5 + 2;
bool vis [N];

vi adj[N];

bool iscycle(int src , vector<vector<int>> &adj,vector<bool> &vis , int parent ){

    vis[src] = true;

    for(auto i : adj[src]){

        if(i != parent){
          
          if(vis[i]){
            return true;
          }
          if( !vis[i] and iscycle(i,adj,vis,src)){
             return true;
          }
        }
    }

    return false; 
}
// here n = vertices , m = edges ;



int main(){

    int n,m;
    cin>>n>>m;

    vvi adj(n);

    rep(i,0,m){

        int u, v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool cycle = false ;

    vector<bool> visited(n,false);

    rep(i,0,n){

        if(!visited[i] and iscycle(i,adj,visited,-1)){

            cycle = true ;
        }
    }
 
   if(cycle){

    cout<<" cycle  is present "<<endl;
   }
   else{

    cout<<"CYCLE is not present "<<endl;
   }
    return 0;
}