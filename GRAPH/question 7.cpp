//connected componets in a graph 

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

// A connected componet is a subgraph in which any two vertices 
// are connected to each other by paths , and which is connected 
// to no additional vertices in the supergraph 

// idea : 1. visit the nodes in a depth - first fashion 
//        2 . if the node is not visited , visit the node it's neighbour 
//            recursively . 

// each time a unvisited node is found , a new component will be found 

// find the numbers of componets graph and it's size . 

// there are N friends numbered from 0 to n-1 . you have to 
// chose 2 person such way they are not related to each other 
// you are given information in the form of M paird s(x,y)
// i.e there is an link between friend x and y .
// find out the number of way which 2 persons from diffrent 
// group can be chosen .

vector<bool> vis ;
int n,m;
vvi adj;
vi components ;

int get_com(int idx ){

   if(vis[idx]){

    return 0;
   }

   vis[idx] = true ;

   int ans = 1 ;

   for(auto i: adj[idx]){

    if(!vis[i]){

        ans += get_com(i);
        vis[i] = true ;
    }
   }

   return ans ;
}

int32_t main(){

    cin>>n>>m;

    adj = vvi (n);
    vis = vector<bool> (n) ;
    for(int i=0 ;i<m;i++){

        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++){

        if(!vis[i]){

            components.push_back(get_com(i));
        }
    }
    for(auto i :components){

        cout<<i<<" ";
    }

    long long ans= 0 ;

    for(auto i: components){

        ans += i*(n-i);
    }

    cout<<endl;

    cout<<(ans/2)<<endl;

    return 0;
}

