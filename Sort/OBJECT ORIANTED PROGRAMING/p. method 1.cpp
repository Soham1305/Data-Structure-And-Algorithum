//function oveloading 
#include <bits/stdc++.h>
using namespace std;
class soham{
    public:
    void fun(){
        cout<<"this is a function with no argument "<<endl;
    }
    void fun(int n){
        cout<<"this is function with int argument "<<endl;
    }
    void fun(double n){
        cout<<"this is function with double argument "<<endl;
    }
};
int main(){
 soham s;
 s.fun();
 s.fun(18);
 s.fun(18.6);
 return 0;
}