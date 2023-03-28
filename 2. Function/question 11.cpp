// convert the decimal number in to the bianry naumber 

//Step 1: Remainder when 10 is divided by 2 is zero. Therefore, arr[0] = 0. 
//Step 2: Divide 10 by 2. New number is 10/2 = 5. 
//Step 3: Remainder when 5 is divided by 2 is 1. Therefore, arr[1] = 1. 
//Step 4: Divide 5 by 2. New number is 5/2 = 2. 
//Step 5: Remainder when 2 is divided by 2 is zero. Therefore, arr[2] = 0. 
//Step 6: Divide 2 by 2. New number is 2/2 = 1. 
//Step 7: Remainder when 1 is divided by 2 is 1. Therefore, arr[3] = 1. 
//Step 8: Divide 1 by 2. New number is 1/2 = 0. 
//Step 9: Since number becomes = 0. Print the array in reverse order. Therefore the equivalent binary number is 1010.

#include <iostream>
#include <vector>
#include <stack>    
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <string> 
#include <map>
#include <set> 
//#include <bits/stdc++.h>

#define vi vector<int>
#define vvi vector <vi> 
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)

using namespace std;

const int N = 1e2+5,MOD = 1e9+7;

int n;

int M(vi &a){

    int temp = n ;

    //int sum = 0;

    int x=2;

    while(temp){

        int rem = n%x;

        temp = temp/x;
// it's your approach ;
        rep(i,0,n){

            if( a[i] != -1){
                a[i] = rem ;
                break;
            }
            
        }

        //sum = sum*10 + rem;

    }

    rep(i,0,n){
        if(a[i+1] == -1){
            break;
        }
        cout<<a[i];
    }

}

void Hi(vi &a){

    int i =0 ;

    int temp = n ;

    while(temp){

        a[i] = temp%2;

        temp = temp/2;

        i++;
    }

    for(int j= i-1;j>=0;j--){

        cout<<a[j];
    }
}

// function to convert decimal to binary
void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
 

int main(){

    cin>>n;

    vi a(n,-1);

    Hi(a);

    //decToBinary(n);

  return 0;
}