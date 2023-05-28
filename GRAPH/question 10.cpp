// Minumum spanning tree find out using the DSU ;

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

const int N= 1e5+6;

vi parent(N);
vi sz(N);

void make_set(int v){

parent[v] =v;
sz[v]= 1 ;

}

int  find_set(int v){

    if(v==parent[v]){

        return v;
    }

    return parent[v] = find_set(parent[v]);
}

void union_set(int a,int b){

    a= find_set(a);
    b= find_set(b);

    if(a != b){

        if(sz[a] < sz[b]){

            swap(a,b);
        }
        parent[b] += a;
        sz[a] += sz[b];
    }
}


int main(){


   rep(i,0,N){

    make_set(i);
   }

   int n,m;
   cin>>n>>m;

   vvi edges;

   rep(i,0,m){

    int v,u,w;
    cin>>v>>u>>w;

    edges.push_back({w,u,v});
   }
   sort(edges.begin(),edges.end());

   int cost = 0;

   for(auto i:edges){

    int w = i[0];
    int u = i[1];
    int v= i[2];

    int x = find_set(u);
    int y = find_set(v);

    if(x==y){
        continue;
    }

     else{

        cout<<u<<" "<<v<<endl;
        cost += w;
        union_set(u,v);
    }

   }

   cout<<cost <<endl;

   return 0;

}