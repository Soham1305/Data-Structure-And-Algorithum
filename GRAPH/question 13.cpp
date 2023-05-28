// Sanack and ladders 

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

// problem of snack and ladder 
// you are squre at 1 and you have to go to 100 . you have to control over the 
// dice and can get any number for 1 to 6 
// for given snack and ladder find the minimum step to reach 100 th squre 


int main(){

    int ladders, snacks ;

    cin>>ladders ;

    map<int,int > lad;

    map<int, int > sna;

    for(int i= 0;i<ladders ;i++){

        int u , v;
        cin>>u>> v;

        lad[u] = v ;
    }

    for(int i= 0;i<snacks;i++){

        int u,v;

        cin>>u>>v;

        sna[u]  = v;

    }

    int moves = 0;

    bool found = false ;

    queue < int > q;

    q. push(1);

    vi vis(101, 0);

    vis[1] = true ;

    while( !q.empty()  and !found ){

        int sz = q. size();

        while(sz--){

            int t = q. front();
            q.pop();

            for(int dic=1 ;dic<= 6;dic++){

                if(t +dic == 100){
                    
                    found  = true  ;
                }

                if( t + dic <=100 and lad[t +dic] and !vis[lad[t+dic]]){

                    vis[lad[t+dic]] = true ;
                     
                    if(lad[t+dic] == 100){

                        found = true ;
                    }

                    q. push(lad[t+dic]);
                }else if( t+ dic <= 100  and sna[t+dic] and !vis[sna[t+dic]]){

                    vis[sna[t +dic]] = true ;

                    if( sna[t + dic] == 100){

                        found = true ;
                    }
                    q. push(sna[t+dic]);
                }else if( t+ dic <= 100 and !lad[t +dic] and !sna[t + dic] and !vis[t + dic]){

                    vis[t + dic]  = true ;

                    q. push(t+ dic );
                }
            }
        }
        moves ++ ;
    }

    if(found ){

        cout<<moves<<endl;
    }else{

        cout<<" -1"<<endl;
    }

    return 0;
}