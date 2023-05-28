// greedy algorithum
// actovity selection problem 

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
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)  

using namespace std;
//sample test case 
// input : 3 
//         10 20 
//         12 15 
//         20 30 

//output    2 

//constrain : 
//            1 <= n <=ae5
//            1<= start,end<=1e9
//            start<= end;

// (i) DP ?
// (ii) greedy ?
// (ii) sorting ?

//(ii) -> if you are at i 'th activity 
//        what shoud be your next step ?
//        take next activity which end first 
//        sort the activity with respect to end time 
//        
signed main (){

     int n;
     cin>>n;

    vector<vector<int>> v;

    for(int i=0;i<n;i++){

        int steart,end;
        cin>>steart>>end;

        v.push_back({steart,end});

    }
    
    sort(v.begin(),v.end(),[&](vector<int> &a,vector<int> &b){

        return a[1] <b[1];
    });

    int take = 1 ;
    int end = v[0][1];

    for(int i=1;i<n;i++){

        if(v[i][0] >= end){
            take ++;
            end = v[i][1];
        }
    }

    cout<<take <<endl;


    return 0;
}
