//pointer introduction 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=100;
    int *aptr=&a;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;
    aptr++;
    cout<<aptr<<endl;
    cout<<a<<endl;
    return 0;
}