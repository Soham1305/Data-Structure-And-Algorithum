//sort an array which consist only 0,1,2 without using soting algorithum
#include <bits/stdc++.h>
using namespace std;
void sort(int a[],int n){
    int zero=0,one=0,two=0;
    for(int i=0;i<n;i++){
        if(a[i]==0) zero++;
        else if(a[i]==1) one++;
        else two++;
    }
    for(int i=0;i<n;i++){
        if(zero-->0) cout<<0<<" ";
        else if(one-->0) cout<<1<<" ";
        else cout<<2<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,n);
    return 0;
}