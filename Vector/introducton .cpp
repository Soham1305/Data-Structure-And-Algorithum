#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    
    vector <int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    for(auto element:v){
        cout<<element<<endl;
    }
    v.pop_back();
    vector <int> v2 (3,50);
    for(auto e:v){
        cout<<e<<endl;
    }
    for(auto element:v2){
        cout<<element<<endl;
    }
    pair <int,char> v3;
    v3.first=3;
    v3.second='S';
    return 0;
}