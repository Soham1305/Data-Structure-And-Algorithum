//multilevel inheritance 
#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    void funcA(){
        cout<<"this is a function of class a"<<endl;
    }
};
class B:public A{
    public:
    void funcB(){
        cout<<"This is a fuction of class B"<<endl;
    }
};
class C :public B{

};
int main(){
    C c;
    c.funcA();
    c.funcB();
    return 0;
}