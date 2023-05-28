// Cycle detection in dierected graph using DSU ;

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
    cin>> n>>m;

    vvi edges;

    rep(i,0,m){

        int u,v;
        cin>>u>>v;
        edges.push_back({u,v});
    }

    bool cylce = false ;
    for(auto i: edges){

        int u=i[0];
        int v = i[1];

        int x= find_set(u);
        int y = find_set(v);

        if(x==y){

            cylce = true ;
        }
    }

    if(cylce){

        cout<<"IN this graph cycle is present "<<endl;
    }else{

        cout<<"IN this graph cycle is not present "<<endl;
    }
    return 0;
}
