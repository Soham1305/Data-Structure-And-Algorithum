//point & range update in Fanwik tree 

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
const int N = 1e5+2,MOD = 1e9+7;
int n;
vi bit ;

void update(int idx,int val){

    while( idx<=n){

     bit[idx] += val;
     idx +=  idx & (-idx);
    }
}

int query(int i){

    int ans  = 0;
    while( i > 0 ){
       ans += bit[i];
       i  -= i  & (-i);
    }
    return ans ;
}

int main(){

    cin>>n;
    bit  = vi(n+1);
    vi a(n+1);

    rep(i,1,n+1){
        cin>>a[i];

        update(i,a[i]);

    }
    int q;
    cin>>q;

    while(q--){

        int c;
        cin>>c;

        if(c==1){

            int l,r;
            cin>>l>>r;
            int ans = query(r) - query(l-1);
            cout<<ans<<endl;
        }else if( c==2){

            int index,val;
            cin>>index>>val;
            a[index]= val;
            update(index,val);

        }
    }
    return 0;
}