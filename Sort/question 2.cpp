// quick sort 
#include <bits/stdc++.h>
using namespace std;
void swap(int a[],int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
int  piret(int a[],int s,int e){
    int pivot=a[e];
    int i=s-1;
    for(int j=s;j<e;j++){
        if(a[j] < pivot ){
            i++;
            swap(a,i,j);
        }
    }
    swap(a,i+1,e);

    return i+1;
}
void quick(int a[],int s,int e){
   if(s<e){

    int pi=piret(a,s,e);

    quick(a,s,pi-1);

    quick(a,pi+1,e);
    }
}
int main(){
    int n;
    cin>>n;
    
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    quick(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}