// Longest comman subseuqence with  3 string 
// use melization method 
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
#include <bits/stdc++.h>

#define vi vector<int>
#define vvi vector <vi> 
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)

using namespace std;

int  LCS(string &s1,string &s2,string &s3,int i,int j,int k){
 
  if( i == 0 || j==0 || k == 0){

    return 0;
  }

  if(s1[i-1] == s2[j-1] and s2[j-1] == s3[k-1] ){

    return 1+LCS(s1,s2,s3,i-1,j-1,k-1);
  }
  
    int l= LCS(s1,s2,s3,i-1,j,k);

    int m = LCS(s1,s2,s3,i,j-1,k);

    int n= LCS(s1,s2,s3,i,j,k-1);
 
    return max({l,m,n});
}


int main(){

    string s1,s2,s3;

    cin>>s1>>s2>>s3;

    cout<<LCS(s1,s2,s3,s1.size(),s2.size(),s3.size())<<endl;

    return  0;
}
