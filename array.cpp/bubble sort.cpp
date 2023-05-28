//bubble sort 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cur=0;
    while(cur<n-1){
        for(int i=0;i<n-cur;i++){
            if(a[i]>a[i+1]){
                swap(a[i+1],a[i]);
            }
        }
        cur++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}