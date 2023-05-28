//print number till n 
//decresing && icresinng
#include <bits/stdc++.h>
using namespace std;
//this is a decresing order;
//void get(int n){
//    if(n==0){
//        return ;
//    }
//    cout<<n<<endl;
//    return get(n-1);
//}
//int main(){
//    int n;
//    cin>>n;
//    get(n);
//    return 0;
//}
//to print numbers in incesing order
void get (int n){
    if(n==1){
        cout<<1<<endl;
        return ;
    }
    get(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    get(n);
    return 0;
}
