// heap sort 

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff f irst 
#define ss second
#define setbits(x) builtin_popcount(x)

void heapify ( vi &a,int n,int i){

    int minIdx = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if( l<n && a[l] > a[minIdx]){

        minIdx = l;
    }

    if( r<n && a[r] > a[minIdx]){

        minIdx = r;
    }

    if(minIdx != i){

        swap ( a[i], a[minIdx]);

        heapify(a,n,minIdx);
    }
}

void heapsort(vi &a){

    int n= a.size();

    for(int i=n/2-1;i>=0;i--){

        heapify (a,n,i);
    }

    for( int i=n-1;i>0;i--){

        swap(a[0],a[i]);

        heapify(a,i,0);
    }
    
}

signed main(){

    int n;
    cin>>n;

    vi a(n);

    rep(i,0,n){

        cin>>a[i];
    }

    heapsort(a);

    rep(i,0,n){

        cout<<a[i]<<" ";
    }

    return 0;
}