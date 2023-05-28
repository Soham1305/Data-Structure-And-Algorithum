//for a given array an an integer x find the minimum subarray 
//size for which sum > x;

//aproach 1 : compute sum of all subarrays & check the condition 
//time the complexity = O ( n^2);

//aproach 2 : use variable like ans, sum & start 
//             itrate over array & start adding element to sum
//             if sum > x, remove element from the start 
//             time complexity : O(n);
// day 82


int smallestsubarraywithsum ( int a[] , int n, int x){

    int sum = 0;
    int minlength = n+1;

    int start = 0;
    int end = 0;

    while( end < n){

        while( sum <= x && end < n){

            sum +=a[end ++];
        }

        while( sum > x  && start < n){

            if ( end - start  < minlength){

                minlength = end -start;
            }

            sum -= a[start ++];
        }
    }

    return minlength;

}

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int x;
    cin>>x;


    int a[n];

    for( int i=0;i<n;i++){

        cin>>a[i];
    }

    int midlength = smallestsubarraywithsum( a , n, x);

    if( midlength == n-1){

        cout<< " NO such subarray exits"<<endl;
    }else{

        cout<<" THe smallest lenght subarray "<<midlength<<endl;
    }

    return 0;
}