//Tiling problem using recersion
#include <bits/stdc++.h>
using namespace std;
int get(int n){
    if(n==0){
        return 0;
    }if(n==1){
        return 1;
    }
    return get(n-1)+get(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<get(n)<<endl;
    return 0;
}