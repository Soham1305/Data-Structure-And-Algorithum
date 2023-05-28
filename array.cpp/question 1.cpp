//find the recooard breaking day 
//1.visiter are strilkely greater then previous day.
//2.visiter are greater then next day .
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    a[n]=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   
    if(n==1){
            cout<<"1"<<endl;
            return 0;
        }
    int ans=0;
    int max_num=-1;
    for(int i=0;i<n;i++){
        
        if(a[i]>max_num&&a[i]>a[i+1]){
            ans++;
        }
        max_num=max(max_num,a[i]);
    }
        

    
    cout<<ans<<endl;
    return 0;
}