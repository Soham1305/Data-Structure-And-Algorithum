//ARRAY ELEMENT NUMBER FOR FIRST REAPITING ELEMENT 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    const int N=10e6+2;
    int A[N];
    for(int i=0;i<N;i++){
        A[i]=-1;
    }
    int repeat=INT_MAX;
    for(int i=0;i<n;i++){
        if(A[a[i]]!=-1){
            repeat=min(repeat,A[a[i]]);
        }else{
            A[a[i]]=i;
        }
    }
    if(repeat==INT_MAX){
        cout<<"NO reapet element available in this array"<<endl;
    }
    cout<<repeat+1<<endl;
    return 0;
}