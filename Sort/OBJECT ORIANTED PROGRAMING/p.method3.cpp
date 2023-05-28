//Run time polymurfism 
//virtual function 
#include <bits/stdc++.h>
using namespace std;

class base{
    public:
    virtual void print(){
        cout<<"this is a base class print function "<<endl;
    }
    virtual void display(){
        cout<<"this is a base class display function"<<endl;
    }

};
class derived:public base{
public:
    void print(){
        cout<<"this is a derived class print function "<<endl;
    }
    void display(){
        cout<<"this is a derived class display function"<<endl;
    }
};

int main(){
    base *baseptr;
    derived d;
    baseptr=&d;
    baseptr -> print();
    baseptr -> display();
    return 0;
}