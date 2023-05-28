//count set bit in integer 
// we need to count bit to convert in set bit 
#include <bits/stdc++.h>
using namespace std;
void getbit(int n){
    int sum=0;
    while(n){
        n=n&(n-1);
        sum++;
    }
    cout<<sum<<endl;
}
int main(){
    int n;
    cin>>n;
    getbit(n);
    return 0;
}