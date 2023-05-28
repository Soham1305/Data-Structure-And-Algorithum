//reverse a string using recersion
#include <bits/stdc++.h>
using namespace std;
void get(string s){
    if(s.length()==0){
       return;
    }
    char ch=s[0];
    get(s.substr(1));
    cout<<s[0];
}

int main(){
    string s;
    cin>>s;
    get(s);
    return 0;
}