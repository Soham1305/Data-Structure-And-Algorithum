//binary search

#include <bits/stdc++.h>
using namespace std;
int binary(int a[],int n,int key){
    int s=0; int e=n; int mid=(s+e)/2;
    for(int i=0;i<n;i++){
        if(a[mid]==key){
           return mid;
        }else if(key<a[mid]){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<binary(a,n,key)<<endl;
    return 0;
}