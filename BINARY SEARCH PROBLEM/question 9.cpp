// for a given array and an integer K, cheack if any subarray 

// aparoach 1 : time complexity O(n^2) [ classivcal mathode ]

// aproach 2 : sum od intial k elenrnt sum 
//             index ++ , add in sum , start ++ -> subtract sum to start array 
//             sum value ! % 3 
//             print final number 
//             all digite sum is also divide by 3 
#include <bits/stdc++.h>
using namespace std;

void computenumberformdubn ( vector <int> a , int k ){

    pair<int,int> ans;

    int sum = 0;

    for ( int i=0;i<k ;i++){

        sum += a[i];
    }

    bool found = false ;

    if(sum % 3 == 0){

        ans = make_pair( 0,k-1);

        found = true;

    }

    for ( int j= k; j<a.size();j++){

        if(found){

            break;
        }

        sum = sum + a[j] - a[j-k];

        if( sum % 3 == 0){

            ans = make_pair(j-k+1,j);

            found = true;
        }
    }

    if( !found){

        ans = make_pair( -1 , 0);

    }

    if ( ans.first == -1){

        cout<<"NO such subarray exits"<<endl;
    }
    else{

        for(int i= ans.first;i<=ans.second;i++){

            cout<<a[i]<<" ";
        }
    }


}

int main(){

    vector < int > a= { 84,23,45,12,56,82};
    
    int k = 3;

    computenumberformdubn( a,k);


    return 0;
}