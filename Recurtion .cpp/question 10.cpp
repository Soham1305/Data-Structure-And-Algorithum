//print all x in the end of the string 
#include <bits/stdc++.h>
using namespace std;
string get(string s){
    if(s.length()==0){
    return "";
    }
    char ch=s[0];
    string ans=get(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }else{
        return ch+ans;
    }
}
int main(){
    string s;
    cin>>s;
    cout<<get(s)<<endl;
    return 0;
}