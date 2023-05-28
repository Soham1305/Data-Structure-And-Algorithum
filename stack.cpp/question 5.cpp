//postfix using stack
#include <iostream>
#include <math.h>
#include <stack>
using namespace std;
int postfix(string s){
    stack<int> st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }else{
            int opt2=st.top();
            st.pop();
            int opt1=st.top();
            st.pop();
             switch (s[i])
        {
        case '+':
            /* code */
            st.push(opt1+opt2);
            break;
        case '-':
            /* code */
            st.push(opt1-opt2);
            break;
        
        case '*':
            /* code */
            st.push(opt1*opt2);
            break;
        
        case '/':
            /* code */
            st.push(opt1/opt2);
            break;
        
        case '^':
            /* code */
            st.push(pow(opt1,opt2));
            break;
        
        default:
        cout<<"USE CURRECT OPERATOOR"<<endl;
            break;
        }
        }
       
        
    }
    return st.top();
}
int main(){
    string s;
    cin>>s;
    cout<<postfix(s)<<endl;
    return 0;
}