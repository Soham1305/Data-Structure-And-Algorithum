//single inheritance 
#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    void func(){
        cout<<"inharitant"<<endl;
    }
};
class B :public A{

};
int main(){
    B b;
    b.func();
}