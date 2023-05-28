// find the peak element in the array 

#include <bits/stdc++.h>
using namespace std;

int FindPeakElement( int a[], int low , int high , int n){

    int mid = low+( high+ low)/2;

    if( (mid == 0 || a[mid -1] <= a[mid]) && ( mid == n-1 || a[mid-1] <= a[mid])){

        return mid;
    } 
    else if ( mid > 0 && a[mid-1] > a[mid]){

        return FindPeakElement(a, low ,mid-1,n);
    }else{

        return FindPeakElement( a, mid+1 , high, n);
    }
}

int main(){

    int n;
    cin>>n;

    int a[n];

    for( int i= 0;i<n;i++){

        cin>>a[i];
    }

    cout<<"PEAK element index "<<FindPeakElement( a, 0,n-1,n)<<endl;

    return 0;
}