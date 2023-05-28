//print all posible from the phone digit 
#include <bits/stdc++.h>
using namespace std;
string so[]={"","","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz"};
void get(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    string code=so[ch-'0'];
    string ros=s.substr(1);
    for(int i=0;i<code.length();i++){
        get(ros,ans+code[i]);
    }
}
int main(){
    get("23","");
    return 0;
}