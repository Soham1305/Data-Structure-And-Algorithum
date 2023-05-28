// expedition problem 
// keep eye on this topic 

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

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vii a(n);

        rep(i,0,n){

            cin>>a[i].ff>>a[i].ss;
        }

        int l,p;

        cin>>l>>p;

        rep(i,0,n){

            a[i].first=l-a[i].ff;
        }

        sort(a.begin(),a.end());

        int ans=0; 

        int cur=0;

        priority_queue<int,vector<int>,greater<int>> pq;

        bool flag = 0;

        rep(i,0,n){

            if(cur>=l){

                break;
            }

            while(cur < a[i].ff){

                if(pq.empty()){

                    flag=1;
                    break;

                }

                ans++;
                cur += pq.top();
                pq.pop();

            }
            if(flag){
                break;
            }
            pq.push(a[i].ss);
        }

        if(flag){
            
            cout<<"-1"<<endl;
            continue;
        }
        
        while(!pq.empty() && cur< l){

        cur += pq.top();
        pq.pop();
        ans++;

        }

        if(cur<l){

            cout<<"-1"<<endl;
            continue;
        }

        cout<<ans<<endl;
    }

    return 0;
}