//n friend problem 
#include<bits/stdc++.h>
using namespace std;
int get(int n){
    if(n==0||n==1||n==2){
        return n;
    }
    return get(n-1)+get(n-2)*(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<get(n)<<endl;
    return 0;
}