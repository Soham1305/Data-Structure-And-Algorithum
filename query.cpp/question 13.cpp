//maximum conaequtive one's
//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    int k;
//    cin>>k;
//    vector<int> a(n);
//    for(auto &i:a){
//        cin>>i;
//    }
//    int i=0; int zero=0; int ans=0;
//    for(int j=0;j<n;j++){
//        if(a[j]==0){
//            zero++;
//    }
//        while(zero>k){
//            if(a[i]==0){
//                zero--;
//            }
//            i++;
//        }
//        ans=max(ans,j-i+1);
//        cin>>i;
//    }
//    
//   cout<<ans<<endl;
//    return 0;
//
//}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &i: a){
        cin>>i;
    }
    int ans=0,zero=0,i=0;
    for(int j=0;j<n;j++){
        if(a[j]==0){
            zero++;
        }
        while(zero>k){
            if(a[i]==0){
                zero--;
            }
            i++;
        }
        ans=max(ans,j-i+1);
    }
    cout<<ans<<endl;
    return 0;
}