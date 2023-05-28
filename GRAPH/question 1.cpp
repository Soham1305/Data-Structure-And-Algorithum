// introduction of graphs 

// keep eye on this topic ;

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
#define vvi vector<vi> 
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)   

using namespace std;

const int N = 1e5+2;



// real life example : user connections in facebook 

// componrts : nodes , edges 

// nodes : these are the state or vertex , for instance , users in case of facebooks 
// edges : links between states in a graph . for instance , connection between users . 


// undirected : two way edges 
// directed   : one way edges 

// representantion : 1. Adjacency matrix 
//                   2. Adjacency List 

// depth first search : 1. preorder , 2. postorder , 3.inorder 

vi adj[N];
//
//signed main(){
//
//    int n , m ;
//
//    cin>>n>> m;
//
//    vvi adgj ( n+1,vi(n+1,0));
//
//    rep (i, 0,n){
//
//        int x, y ;
//
//        cin>>x>>y;
//
//        adgj[x][y] = 1;
//
//        adgj [y][x] = 1;
//
//    }
//
//    cout<<" adjenjancy matrix is above graph is given by : "<< endl;
//
//    rep ( i, 1 , n+1){
//
//        rep(j,1,n+1){
//
//            cout<<adgj[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//
//    if ( adgj [3][2]){
//
//        cout<<" there is a edge between 3 and 2 "<<endl;
//    }else{
//        cout<<" there is a no edge available "<<endl;
//    }
//
//    if ( adgj [3][7]){
//
//        cout<<" there is a edge between 3 and 2 "<<endl;
//    }else{
//        cout<<" there is a no edge available "<<endl;
//    }
//
//    cout<<endl<<endl;
//
//    cin>>n>>m;
//
//     rep(i,0,m ){
//
//        int x,y;
//        cin>> x>> y ;
//
//        adj[x].push_back(x);
//
//        adj[y].push_back(y);
//
//     }
//
//     cout<<" adjancy list above graph is given by : "<<endl;
//
//     rep (i,1,n+1){
//
//        cout<<i<<" -> ";
//
//        for(int x:adj[i]){
//
//            cout<<x<<" ";
//        }
//
//        cout<<endl;
//     }
//
//
//    return 0;
//}

signed main(){

    int n, m;
    cin>> n>> m;

    vvi adjm(n+1,vi(n+1,0));

    rep(i,0,m){

        int x,y;
        cin>>x>>y;

        adjm[x][y]= 1;
        adjm[y][x]=1;
    }

    cout<<" the adjacement matrix of graph "<<endl;

    rep(i,1,n+1){

     rep(j,1,n+1){

        cout<<adjm[i][j]<<" ";
     }
     cout<<endl;
    }

    if(adjm[3][7] == 1){

        cout<<" THERE is a edge betweeen 3 and 7 "<<endl;
    }else {
        cout<<" THERE  is no edge "<<endl;
    }

  cout<<endl<<endl;

  cin>>n>>m;

  rep(i,0,n){

    int x;int y;

   cin>>x>> y;

   adj[x].push_back(y);
   adj[y].push_back(x); 
  }

  cout<<" adjacency list of above graph is given by : "<<endl;
  
  rep(i,1,n+1){
    cout<<i<<" -> ";

    vector<int> :: iterator it;

    for(it = adj[i].begin();it!= adj[i].end();it++){

        cout<<*it<<" ";
    }
    cout<<endl;

    
  }
    return 0;
}

