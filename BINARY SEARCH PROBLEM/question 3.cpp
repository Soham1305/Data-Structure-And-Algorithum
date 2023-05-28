//page allocation problem using binary search 

#include <bits/stdc++.h>
using namespace std;

bool IsPosible ( int a[], int n, int m , int min){

    int studentsRequred = 1;
    int sum = 0;

    for(int i= 0;i<n ;i++){

        if(a[i] > min){

          return false;
        }
        if( sum+a[i] > min){
            studentsRequred++;
            sum = a[i];

            if(studentsRequred > m){
                return false;
            }
        }else {
            sum +=a[i];
        }
    }

    return true;

}
int Aloocateminimum(int a[], int n, int m){

    int sum = 0;

    if( n<m){

        return -1;
    }
    
    for( int i= 0 ; i<n;i++){

        sum+= a[i];
    }

    int ans = INT_MAX; 

    int start = 0;

    int end = sum;

    while ( start<= end){

        int mid = (start + end)/2;
        if(IsPosible(a,n,m,mid)){

            ans = min( ans, mid);
            end = mid -1;
        }
        else {

            start = mid+1;
        }
    }

    return ans;
}

int main(){

    int n;
    cin>>n;

    int a[n];

    for( int i=0;i<n;i++){
        cin>>a[i];

    }
    int m,n1;
    cin>>m>>n1;

    cout<<" THE minimume no if pages  : "<<Aloocateminimum(a,n,m)<<endl;

    return 0;
}