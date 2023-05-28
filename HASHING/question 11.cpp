// make file pattern 

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

signed main(){

    int n;
    cin>>n ;

    vi a(n);

    rep(i,0,n){
        
        cin>>a[i];
    }

    priority_queue<int,vi,greater<int>> minheap;

    rep(i,0,n){
        
        
        minheap.push(a[i]);
    }

    int ans=0 ;

    while(minheap.size() > 1){

        int e1 = minheap.top();
        minheap.pop();

        int e2 = minheap.top();
        minheap.pop();

        ans += e1+ e2;
        minheap.push(e1+e2);
    }

    cout<<ans<<endl;

    return 0;
}