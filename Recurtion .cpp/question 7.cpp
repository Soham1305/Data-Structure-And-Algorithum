//first and last occurance of an any given element 
//in given array 
#include <bits/stdc++.h>
using namespace std;
int first(int a[],int n,int i,int key){
    if(i==n){
     return -1;
    }
    if(a[i]==key){
        return i;
    }
    return first(a,n,i+1,key);
}
//int last(int a[],int n,int i,int key){
//   if(a[i]==0){
//    return -1;
//   }             //this is a short cut mathod
//   if(a[i]==key){
//    return i;
//   }if(a[i]!=key){
//    int k=last(a,n,i-1,key);
//   }
//}
int last(int a[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int d= last(a,n,i+1,key);
    if(d!=-1){
        return d;   
    }
    if(a[i]==key){
        return i;
    }
    return -1;
}
int main(){
    int n;
    int key;   
    cin>>n;
    cin>>key;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<first(a,n,0,key)<<endl;
    cout<<last(a,n,0,key)<<endl;
    return 0;
}