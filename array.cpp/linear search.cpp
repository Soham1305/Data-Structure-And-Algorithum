#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int key;
    cin>>key;
    for(int i=0;i<n;i++ ){
        cin>>a[i];
    }
    bool chack=0;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            cout<<"KEY IS FOUD"<<endl;
            cout<<i<<endl;
            chack=1;
        }
    }
    if(chack==0){
        cout<<"SOORY,this key is not avilable in this array"<<endl;
    }
    return 0;
}