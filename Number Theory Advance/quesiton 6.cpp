// Matrix Exponiatin 

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

const int N = 1e5+7,MOD=1e9+7;


// fuction to multiply 

vvi multiply(vvi &a,vvi &b){

int  n = a.size();

vvi ans(n,vi(n,0));

rep( i, 0, n){

    rep(j,0,n){

        rep(k,0,n){

            ans[i][j] += a[i][k] * b[k][j];
        }
    }

}

return ans;

}

//fuction to exponetiate 
vvi Matrix(vvi &a,int n){

    if( n==0){

        int sz=a.size();
        vvi ans(sz,vi(sz,0));

        rep(i,0,sz){

            ans[i][i] = 1;
        }
        return ans;
    }

    if( n ==1){

        return a;
    }

    vvi temp = Matrix(a,n/2);

    vvi ans = multiply(temp,temp);

    if( n & 1){

        ans = multiply(ans,a);
    }
    return ans;

}

int main(){

    int n;
    cin>>n;

    vvi a(2,vi(2,0));

    a = { {1,1},{1,0}};

    vvi ans = Matrix(a,n);

    int sz = ans.size();

    // rep(i,0,sz){

    //     rep( j,0,sz){

    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<< " the " << n <<"th Fibbonnaci number is " <<ans[0][1]<<endl;

    return 0;
}