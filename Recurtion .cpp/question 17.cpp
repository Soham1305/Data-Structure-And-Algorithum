//count a number of possible path 
//in  a  maze
#include <bits/stdc++.h>
using namespace std;
int get(int n,int i,int j){
    if(i==(n-1)&&j==(n-1)){
       return 1;
    }if(i==n||j==n){
        return 0;
    }
    //int a=get(n,i+1,j);
    //int b=get(n,i,j+1);
    return get(n,i+1,j)+get(n,i,j+1);
}
int main(){
    int n;
    cin>>n;
    cout<<get(n,0,0)<<endl;
    return 0;
}