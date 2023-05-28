//top k most frequent element in the stream 

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

    int n,k;

    cin>>n>>k;


    vi a(n);

    rep(i,0,n){

        cin>>a[i];
    }

    map<int,int> freq;

    rep(i,0,n){

        int presentsize = freq.size();

        if(freq[a[i]] == 0 && presentsize == k ){

            break;
        }
        freq[a[i]]++;
    }

    vii ans;

    map<int ,int> :: iterator it;

    for(it=freq.begin();it!= freq.end();it++){

        if(it-> ss != 0){
        
        pii p;
        p.ff = it->ss;
        p.ss = it->ff;
        ans.push_back(p);
    
        }
    }

    sort (ans.begin(),ans.end(),greater<pii>());

    vii :: iterator it1 ;

    for( it1 = ans.begin();it1 != ans.end();it1++){

        cout<< it->ss<<" "<<it->ff<<endl;
    }

    return 0;
}