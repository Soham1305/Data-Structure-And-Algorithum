//sort 0 , 1 ,2 in array without using soting algorithum
#include <bits/stdc++.h>
using namespace std;

//void DNFsort(int a[],int n){
//    int d=0;
//    int b=0;
//    int c=0;
//    for(int i=0;i<n;i++){
//        if(a[i]==0){
//            d++;
//        }else if(a[i]==1){
//            b++;
//        }else {
//            c++;
//        }
//    }
//    for(int i=0;i<n;i++){
//        if(d-->0) cout<<0<<" ";
//        else if(b-->0) cout<<1<<" ";
//        else cout<<2<<" ";
//    }
//    
//   
//}
//
//int main(){
//    int n;
//    cin>>n;
//
//    int a[n];
//
//    for(int i=0;i<n;i++){
//       cin>>a[i];
//    }
//
//    DNFsort(a,n);
//
//    return 0;
//}

void sort(int a[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[low],a[mid]);
            mid++;
            low++;
        }else if(a[mid]==1){
            mid++;
        }else{
            swap(a[mid],a[high]);
            high--;
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