//heap STL
//video 130
//priority-queue<int,vector<int>>
//proority-queue<int,vector<int>,greater<int>>
//push - log n
//pop  - log n;
//top  - 1;
//size  - 1;

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)  

signed main(){

    priority_queue<int,vector<int>> pq;

    pq.push(2);
    pq.push(1);
    pq.push(3);

    cout<<pq.top()<<endl;

    pq.pop();

    cout<<pq.top()<<endl;

    cout<<endl;

    priority_queue<int,vector<int>,greater<int>> pqa;

    pqa.push(1);
    pqa.push(2);
    pqa.push(3);

    cout<<pqa.top()<<endl;

    pqa.pop();

    cout<<pqa.top()<<endl;
    

}
