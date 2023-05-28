//operator overloding 
#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int real,imag;
    public:
    Complex(int r=0,int i=0){
           real=r;
           imag=i;
    }
    Complex operator + (Complex const &a){
     Complex res;
     res.imag=imag+a.imag;
     res.real=real+a.real;
     return res;
    }
    void display(){
        cout<<real<<" +i"<<imag<<endl;
    }
};
int main(){
    int n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    Complex c1(n1,n2),c2(n3,n4);
    Complex c3=c1+c2;
    c3.display();
    return 0;

}