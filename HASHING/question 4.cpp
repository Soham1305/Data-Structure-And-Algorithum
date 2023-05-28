// count the number of subarray with zero sum 

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
    cin>>n;

    vi a(n);
    rep (i,0,n){

        cin>>a[i];
    }

    map<int,int> cnt;

    int presum=0;

    rep(i,0,n){

        presum += a[i];
        cnt[presum]++;
    }

    int ans=0;

    map<int,int> :: iterator it;

    for( it=cnt.begin();it!=cnt.end();it++){

        int c = it-> ss;

        ans +=((c*(c-1))/2);

        if(it->ss ==0){
        
        ans+=it->ss;

        }
    }

    cout<<ans<<endl;

    return 0;


    return 0;
}
