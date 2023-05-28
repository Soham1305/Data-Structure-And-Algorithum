//FIND THE MAXIMUM AND MINIMUM ELEMENT IN GIVEN ARRAY
//future task is do this question with using function 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min_num=INT_MAX;
    int max_num=INT_MIN;
    for(int i=0;i<n;i++){
        min_num=min(min_num,a[i]);
        max_num=max(max_num,a[i]);
    }
    cout<<min_num<<endl<<max_num<<endl;
    return 0;
}