//chack parenthesis using stack;
#include <iostream>
#include <math.h>
#include <algorithm>
#include <stack>
using namespace std;
bool chack(string s){
    stack<char> st;
    //bool ans=true;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }else if(s[i]==')'){
          if(!st.empty()&&st.top()=='('){
            st.pop();
          }else{
            return false ;
            break;
          }
        }else if(s[i]=='}'){
          if(!st.empty()&&st.top()=='{'){
            st.pop();
          }else{
            return false ;
            break;
          }
        }
        else if(s[i]==']'){
          if(!st.empty()&&st.top()=='['){
            st.pop();
          }else{
            return false ;
            break;
          }
        }
    }
  if(!st.empty()){
    return false;
  }
    return true;
}
int main(){
    string s;
    cin>>s;
    if(chack(s)){
        cout<<"THIS IS VALID"<<endl;
    }else  {
        cout<<"THIS IS INVALID"<<endl;

    }
    return 0;
}