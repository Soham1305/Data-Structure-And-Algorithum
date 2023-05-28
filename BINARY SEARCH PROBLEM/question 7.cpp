// max sum of subarray of size = k ans sum x 

// approcach 1 : all posible subarray and compare them to given less then x 
// time complexity : O(n^K);

// approach 2 : get sum of first k element 
//              initialize ans with sum 
//              itrate over full array ( slidind windows or two pointer aproach )
//time complexity : O (n);

#include <bits/stdc++.h>
using namespace std;

void Maxsubarraysum( int a[], int n, int k ,int x){

    int sum = 0;
    int ans = 0;

    for( int i=0;i<k ;i++){

        sum += a[i];
    }

    if( sum < x){

        ans = sum;
    }

    for(int i= k ; i<n;i++){

        sum = sum - a[i-k];
        sum = sum + a[i];

        if( sum < x){

            ans = max ( ans , sum);
        }
    }

    cout<<"the answer is "  <<  ans <<endl;

}

int main(){

    int n;
    cin>>n;

    int k;
    cin>>k;

    int x;
    cin>>x;

    int a[n];

    for( int i= 0;i<n;i++){

        cin>>a[i];

    }
   
    Maxsubarraysum(a,n,k,x);


    return 0;
}