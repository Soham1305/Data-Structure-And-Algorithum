//find the dublicate character in a sting 
#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    int a[26]={0};
    for(int i=0;i<n.size();i++){
       a[n[i]-'a']++;
    }
    int maxnum=INT_MIN;
    char ans;
    for(int i=0;i<26;i++){
        if(a[i]>maxnum){
          maxnum=a[i];
          ans=i+'a';
        }
    }
    cout<<maxnum<<" "<<ans<<endl;
    
    return 0;
}