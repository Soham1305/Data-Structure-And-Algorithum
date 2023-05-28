// find the key in the array anf return it's index in the rotating arary 

#include <bits/stdc++.h>
using namespace std;

int searchinrotatedaaraay( int a[], int key, int left , int right ){

    if( left > right ){

       return -1;
    }

    int mid = ( left + right)/2;

    if( a[mid] == key ){

      return mid;
    }

    if(a[left] <= a[mid]){

        if( key >= a[left] && key <= a[mid]){

           return searchinrotatedaaraay(a,key,left,mid-1);

        }else{

            return searchinrotatedaaraay(a, key,mid+1,right);

        }

    }

    if( key >= a[mid] && key <=a[right]){
        
        return searchinrotatedaaraay( a, key , mid+1, right);

    }

    return searchinrotatedaaraay(a,key,left,mid-1);
    
}

int main(){

    int n;
    cin>>n;
    
    int key ;
    cin>>key;

    int a[n];

    for(int i= 0;i<n;i++){

        cin>>a[i];
    }

    int Idx = searchinrotatedaaraay(a,key,0,n-1);

    if( Idx == -1){

        cout<<" kEY is not exits in this rotating array "<<endl;
    }else{
        cout<<"Key is foind in this rotating arrray  at :"<<Idx<<endl;
    }

    return 0;
}