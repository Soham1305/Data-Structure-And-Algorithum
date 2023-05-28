// surrounded region 


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

// given 2 D board containg 'X' and 'O' (the latter O)  , capture all region surrounded by 'X' 
// a region is capturer by flipping all O's into 'x' s in that surounded region 

void change(vector<vector<char>> &A , int x, int y){

  

}

int main(){

    int m,n;
    cin>>m>>n;

    vector<vector<char>> A(n,vector<char>(m));

    for(int i=0;i<n;i++){

        for (int j = 0;j<m;j++){

         cin>>A[i][j];
        }
    }

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if( i==0 or j== 0 or i == n-1 or j == n-1){

                change(A,i,j) ; // * convert 
            }
        }
    }

    for(int i =0;i<n;i++){

        for(int j=0;j<m;j++){

            if(A[i][j] == 'O'){

                A[i][j] = 'X';
            }
        }
    }

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){
            cout<<A[i][j];
        }
        cout<<endl;
    }

    return 0;
}