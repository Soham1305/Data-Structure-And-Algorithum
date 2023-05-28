//count inversion 
#include <bits/stdc++.h>
using namespace std;

long long merge(int a[],int s,int mid,int e){
    long long inv=0;
    int n1=mid-s+1;
    int n2=e-mid;

    int b[n1];
    int c[n2];

    for(int i=0;i<n1;i++){
        b[i]=a[s+i];
    }

    for(int i=0;i<n1;i++){
        c[i]=a[mid+i+1];
    }
    int i=0,j=0,k=s;
    while(i<n1 && j<n2){
        if(a[i]<=b[i]){
            a[k]=b[i];
            k++;i++;
        }
        else{
            a[k]=c[j];
            inv+=n1-i;
            k++;j++;
        }
        while(i<n1){
            a[k]=a[i];
            k++;j++;
        }
    }
    return inv;
}

long long mergesort(int a[],int s,int e){
 long long inv=0;
 if(s<e){
    int mid=(s+e)/2;
    inv+=mergesort(a,s,mid);
    inv+=mergesort(a,mid+1,e);
    inv+=merge(a,s,mid,e);
 }
 return inv;
}

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<mergesort(a,0,n-1);
    return 0;
}