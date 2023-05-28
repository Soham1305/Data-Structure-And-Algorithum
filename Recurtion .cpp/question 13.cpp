//print substring with thrir asscai code 
#include <bits/stdc++.h>
using namespace std;
void get(string s,string ans){
    if(s.length()==0){
     cout<<ans<<endl;
     return;
    }
    char ch=s[0];
    int so=s[0];
    string ros=s.substr(1);
    get(ros,ans);
    get(ros,ans+ch);
    get(ros,ans+to_string(so));
}
int main(){
    string s;
    cin>>s;
    get(s,"");
    return 0;
}