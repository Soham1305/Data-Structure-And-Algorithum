//count the all posible path from 
//start point to end point in gameboard 
//in dice game___using Recurtion
#include <bits/stdc++.h>
using namespace std;
int get(int s,int e){
    if(s==e){
        return 1;
    }if(s>e){
        return 0;
    }
    int sum=0;
    for(int i=1;i<=6;i++){
        sum+=get(s+i,e);
    }
    return sum;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<get(n1,n2)<<endl;
    return 0;
}
