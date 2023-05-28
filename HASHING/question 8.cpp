// greedy algorithum 
// indian coin change probleme 

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

//you are given an array of denomination and value x . you need to find the 
//minimum number of coins requred to make value x . ( there are inifnete supply of each coin ).
//example : 1 2 5 10 20 50 100 200 500 2000
// x = 388

//approach :
// start from the largest value of denomination 
// do dry run 

signed main(){

    int n;
    cin>>n;

    vi a(n);

    rep(i,0,n){
        cin>>a[i];
    }

    int x;
    cin>>x;

    sort ( a.begin(), a.end(), greater<int> ());
    int ans= 0;

    for(int i=0;i<n;i++){

        ans+=x/a[i];
        x -= x/a[i]*a[i];
    }
    cout<<ans<<endl;



    return 0;
}