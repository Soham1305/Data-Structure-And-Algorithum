//multiple inheritance 
#include <bits/stdc++.h>
using namespace std;
class A {
    public :
    void funcA(){
        cout<<"THIS IS A FUNCTION OF A CLASS"<<endl;
    }
};
class B{
    public:
    void funcB(){
        cout<<"THIS IS A FUNCTION OS B CLASS"<<endl;
    }
};
class C : public A,public B{
public:
};
int main(){
    C c;
    c.funcA();
    c.funcB();
    return 0;
}