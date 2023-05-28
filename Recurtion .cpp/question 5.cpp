//find the arraay is sorted or not 
#include <bits/stdc++.h>
using namespace std;
int get(int a[],int n,int c){
    int k;
    if(c==n-1){
        return 1;
    }
    if(a[c]<=a[c+1]){
        k=get(a,n,c+1);
    }if(a[c]>a[c+1]){
        return 0;
    }
    return k;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<get(a,n,0);
    return 0;
}