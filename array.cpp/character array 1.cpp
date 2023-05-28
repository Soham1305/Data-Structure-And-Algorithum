//CHACK IF ENTER WORD IS POLINTOM OR NOT 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    bool chack=1;
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-1-i]){
            chack=0;
            break;
        }
    }
    if(chack==1) cout<<" THE WORD IS POLINTROM"<<endl;
    else cout<<"THE WORD IS NOT AN POLINTOM WORD "<<endl;
    return 0;
}
