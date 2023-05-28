//wave sort 
#include <bits/stdc++.h>
using namespace std;

void sort(int a[],int n){
    for(int i=1;i<n;i+=2){
        if(a[i]>a[i-1]){
            swap(a[i],a[i-1]);
        }
        if(a[i]>a[i+1] && i<=n-2){
            swap(a[i],a[i+1]);
        }
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

    for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
    }

    return 0;
}