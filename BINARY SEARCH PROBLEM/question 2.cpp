// largest min k node distance 

//#include <iostream>
//#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

bool isfesible( int mid , int a[], int n ,int k){

    int pos = a[0];
    int element =1;

    for(int i = 1;i< n;i++){

        if(a[i]- pos >= mid){

            pos = a[i];
            element++;

            if( element == k){

                return true;
            }
            
        }
    }

    return false;
}

int largestMinDistance ( int a[], int n , int k){

    sort(a,a+n);

    int result = -1;
    int left = 1;
    int right = a[n-1];

    while( left < right ){

        int mid = ( left + right )/2;

        if(isfesible(mid, a, n, k)){

            result = max( result , mid);

            left = mid +1;
        }else {

            right = mid;
        }

    }


}

int main(){

    int n;
    cin>>n;

    int a[n];

    for( int i= 0 ;i< n;i++){

        cin>>a[i];
    }

    int k ;
    cin>>k;

    int a2[]= { 1, 2 , 8 , 4, 9};

    cout<< " Largest min distance is : "<<largestMinDistance(a2,5,3)-1<<endl;

    return 0;
}