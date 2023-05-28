// sliding window 
// subarray with polintrome 

#include <bits/stdc++.h>
using namespace std;

bool pelentrom (int num){

    int temp = num;

    int number = 0;

    while( temp > 0){

        number = number*10 +temp %10;

        temp/=10;
    }
    
    if( number == num){

        return true;
    }

    return false;
}

int findpalindrome( vector<int> a, int k){

    int num = 0;

    for ( int i= 0;i<k ;i++){

        num = num*10 + a[i];
    }

    if(pelentrom(num)){

        return 0;
    }

    for( int j=k; j<a.size();j++){

    num  = ( num % (int)pow(10,k-1))*10 + a[j];

    if( pelentrom(num)){

        return j-k+1;
    }
    }

    return -1;
}


int main(){

    vector<int> a= { 2,3,5,1,1,5};
    int k=4;

    int ans = findpalindrome(a,k);

    if( ans == -1){

        cout<<"PAlindrominc subarray does not exits"<<endl;
    }else{

        for( int i=ans;i<ans+k;i++){

            cout<<a[i]<<" ";
        }

        cout<<endl;
    }
    return 0;
}