//find the union and intersection of 2 arry;
#include <bits/stdc++.h>
using namespace std;
int  get1(int a1[],int a2[],int n1,int n2){
    set<int> result;
        
        for(int i=0;i<n1;i++){
            result.insert(a1[i]);
        }
        
        for(int i=0;i<n2;i++){
            result.insert(a2[i]);
        }
        
    return result.size();
}
int main(){
    int n1;
    cin>>n1;
    int a1[n1];
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    int n2;
    cin>>n2;
    int a2[n2];
    for(int i=0;i<n2;i++){
        cin>>a2[i];
    }
    cout<<get1(a1,a2,n1,n2);
    //get2(a1,a2,n1,n2);
    return 0;
}
