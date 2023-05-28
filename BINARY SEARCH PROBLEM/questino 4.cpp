// painters promblem 
// appy binary search for minimum & maximum posible value of min lenght 
// of bords to be paited 
// chack the feasibility of this chosen value 
// assign bords to sequential manors , while current length of assigned 
// boards don't  exeed the value set by binary search 
// day 79

#include <bits/stdc++.h>
using namespace std;

int findfisible( int a[], int n , int limite){

   int sum = 0,painters =1;

   for( int i= 0;i<n;i++){

    sum += a[i];

    if ( sum > limite){

        sum = a[i];

        painters ++;
    }

   }

   return painters;

}

int Painterspartian ( int a[], int n, int m){

    int toatelenth = 0, k=0;

    for( int i=0;i<n;i++){

        k = max(k,a[i]);

        toatelenth += a[i];
    }

    int low = k, high = toatelenth;

    while( low < high){

        int mid = (low + high)/2;

        int painters = findfisible(a,n,mid);

        if(painters <= m){

            high = mid;

        }else{ 

            low = mid +1;
        }
    }

    return low ;
}

int main(){

    int n;
    cin>>n;

    int m;
    cin>>m;

    int a[n];

    for(int i = 0;i<n;i++){

        cin>>a[i];
    }
    

    cout<< " Minumum time to paint the boars " << Painterspartian( a, n, m)<<endl;
    return 0;
}