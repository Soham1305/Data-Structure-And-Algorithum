//count sort 
#include <bits/stdc++.h>
using namespace std;

void countsort(int a[],int n){
     
    int k=a[0];

    for(int i=0;i<n;i++){
        k=max(k,a[i]);
    }

     
    int count[k+1] ={0};

    for(int i=0;i<n;i++){
      count[a[i]]++;
    }

    for(int i=1;i<=k+1;i++){
      count[i]+=count[i-1];
    }

    int output[n]={0};

    for(int i=n-1;i>=0;i--){
        output[--count[a[i]]]=a[i];
    }

    for(int i=0;i<n;i++){
        a[i]=output[i];
    }
}
int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    countsort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}