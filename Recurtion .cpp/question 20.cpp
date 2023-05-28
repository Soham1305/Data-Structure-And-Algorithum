//kanpsack problem
//#include <bits/stdc++.h>
//using namespace std;
//int knap(int v[],int wa[],int n,int w){
//    if(n==0||w==0){
//        return 0;
//    }if(wa[n-1]>w){
//      return knap(v,wa,n-1,w);
//    }
//    return max((knap(v,wa,n-1,w-wa[n-1])+v[n-1]),(knap(v,wa,n-1,w)));
//}
//int main(){
//    int n,w;
//    cin>>n>>w;
//    int wa[n];
//    int v[n];
//    for(int i=0;i<n;i++){
//        cin>>wa[i];
//    }
//    for(int i=0;i<n;i++){
//        cin>>v[i];
//    }
//    cout<<knap(v,wa,n,w);
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
int knap(int v[],int wa[],int n,int w){
    if(n==0||w==0){
        return 0;
    }if(wa[n-1]>w){

    }
    return max(knap(v,wa,n-1,w-wa[n-1])+v[n-1],knap(v,wa,n-1,w));
}
int main(){
    int n,w;
    cin>>n>>w;
    int wa[n];
    int v[n];
    for(int i=0;i<n;i++){
        cin>>wa[i];
    }
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<knap(v,wa,n,w)<<endl;
    return 0;
}