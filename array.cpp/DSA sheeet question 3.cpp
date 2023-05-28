#include <bits/stdc++.h>
using namespace std;
//int chack(int a[],int n,int k){
//    sort(a,a+(n-1));  //for k th smallest elemrnt
//    return (a[k-1]);
//}
int chack(int a[],int n,int k){
    sort(a,a+(n-1));      //for k th biggest element 
    return (a[n-k]);
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<chack(a,n,k);
    return 0;
}