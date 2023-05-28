//replace pi with 3.14
#include <bits/stdc++.h>
using namespace std;
string get(string s){
    string pi="3.14";
    if(s.length()==0){
    return "";
  }
  if(s[0]=='p'&&s[1]=='i'){
       string ans=(pi+get(s.substr(2)));
    return ans;
  }else{
    string ans=get(s.substr(1));
    return ans;
  }
}
int main(){
    string s;
    cin>>s;
    cout<<get(s);
    return 0;
}