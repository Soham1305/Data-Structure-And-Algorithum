//perfect number is subarray

#include <bits/stdc++.h>
using namespace std;

bool isnumberperfect( int n){

    int sum = 1;

    for(int i=2;i<sqrt(n);i++){

        if( n% i == 0){

        if( i == n/i){
            sum+=i;
        }else{
            sum += i+n/i;
        }
        }
    }

    if( sum ==n && a!=1){

        return true;
    }

    return false;
}

int maxsum( int a[] , int n , int k){

    if( n < k ){

    cout<< "INvelideN val "<<endl;
    return -1;
    }

    int res = 0;

    for( int i= 0;i<k ;i++){

        res += a[i];
    }

    int sum = res;

    for ( int i=k;i<n;i++){

        sum += a[i]-a[i-k];
        res = max( res,sum);
    }

    return res;

    
}

int maxnumberofpaefects( int a[] , int n, int k){

    for( int i=0; i<n;i++){

        if ( isnumberperfect(a[i])){

            a[i] = 1;
        }
        else{

            a[i] = 0;
        }
    }

    return maxsum(a,n,k);
}

int main(){

    int a[] = { 28,2,3,6,436,99,8128.24};
    int k = 4;
    int n = 8;

    cout<<maxnumberofpaefects(a,n,k);

    return 0;
}