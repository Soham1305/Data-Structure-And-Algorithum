//longest airthmetic countinues element in array 


#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pd=a[0]-a[1];
    int cur=2;
    int ans=2;
    int j=2;
    while(j<n){
        if(pd=a[j]-a[j+1]){
            cur++;
        }else {
            pd=a[j]-a[j+1];
            cur=2;
        }
        ans=max(ans,cur);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}