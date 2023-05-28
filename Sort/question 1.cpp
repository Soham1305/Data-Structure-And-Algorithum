//merge sort
#include <bits/stdc++.h>
using namespace std;

void merge(int a[],int s,int mid,int e){

    int n1=mid-s+1;
    int n2=e-mid;
    
    int b[n1];
    int c[n2];

    for(int i=0;i<n1;i++){
        b[i]=a[s+i];
    }

    for(int i=0;i<n2;i++){
        c[i]=a[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=s;

    while(i < n1 && j < n2){
        if(b[i]<c[j]){
          a[k] = b[i];
          k++;i++;
        }else{
          a[k] = c[j];
          k++;j++;
        }
    }
     while(i<n1){
            a[k] = b[i];
            k++;i++;
        }

    while(j<n2){
            a[k] = c[j];
            k++;j++;
    }

}

void mergesort(int a[],int s,int e ){

    if(s<e){
       
       int mid=(s+e)/2;
       mergesort(a,s,mid);
       mergesort(a,mid+1,e);

       merge(a,s,mid,e);
    }

}
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    mergesort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
//#include <bits/stdc++.h>
//using namespace std;
//void merge(int a[],int s,int mid,int e){
//
//    int n1=mid-s+1;
//    int n2=e-mid;
//
//    int b[n1];
//    int c[n2]; //temp array
//
//    for(int i=0;i<n1;i++){
//        b[i]=a[s+i];
//    }
//
//    for(int i=0;i<n2;i++){
//        c[i]=a[mid+1+i];
//    }
//    
//    int i=0;
//    int j=0;
//    int k=s;
//    while(i<n1 && j<n2){
//        if(b[i] < c[j]){
//            a[k]=b[i];
//            k++;i++;
//        }
//        else{
//            a[k]=c[j];
//            k++; j++; 
//        }
//    }
//    while(i<n1){
//        a[k]=b[i];
//        k++;i++;
//    }
//    while(j<n2){
//        a[k]=c[j];
//        k++;j++;
//
//    }
//}
//void mergesort(int a[],int s,int e){
//    if(s<e){
//
//        int mid=(s+e)/2;
//
//        mergesort(a,s,mid);
//        mergesort(a,mid+1,e);
//
//        merge(a,s,mid,e);
//    }
//
//}
//int main(){
//    
//    int n;
//    cin>>n;
//
//    int a[n];
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//
//    mergesort(a,0,n-1);
//
//    for(int i=0;i<n;i++){
//        cout<<a[i]<<" ";
//    }
//    return 0;
//}