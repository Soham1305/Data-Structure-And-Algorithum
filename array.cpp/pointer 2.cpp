//pointer on array 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[]={10,20,30};
    int *ap=a;
    cout<<*ap<<endl;
    for(int i=0;i<3;i++){
        cout<<*ap<<endl;
        ap++;
    }
    return 0;
}