//remove all dublicate element from string 
#include <bits/stdc++.h>
using namespace std;
string get(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=get(s.substr(1));
    if(ch==ans[0]){
        return ans;
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