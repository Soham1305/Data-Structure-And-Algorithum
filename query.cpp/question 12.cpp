//3 sum problem
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    bool chack=false;
    for(int i=0;i<n;i++){
        int lo=i+1;
        int hi=n-1;
        while(lo<hi){
            int cureent =a[i]+a[lo]+a[hi];
            if(cureent==t){
                chack=true;
                //break;
            }
            if(cureent<t){
                lo++;
            }else{
                hi--;
            }
        }
    }
    if(chack){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}