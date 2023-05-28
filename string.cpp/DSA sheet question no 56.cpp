//reverse  a string 
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    for(int i=0;i<(s1.size()-1)/2;i++){
       int temp=s1[i];
       s1[i]=s1[s1.size()-i-1];
       s1[s1.size()-i-1]=temp;
    }
    cout<<s1<<endl;
    return 0;
}
