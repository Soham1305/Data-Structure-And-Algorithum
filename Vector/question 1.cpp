//get unsorted to be soted with they index
// remain present array
#include <bits/stdc++.h>
using namespace std;

bool issafe(pair<int,int>p1,pair<int,int>p2){
    return p1.first<p2.first;

}
int main(){

int n;
cin>>n;

int a[n];

for(int i=0;i<n;i++){
    cin>>a[i];
}
vector <pair<int,int>>v;

for(int i=0;i<=(sizeof(a)/sizeof(a[0]));i++){
    v.push_back(make_pair(a[i],i));
}
sort(v.begin(),v.end(),issafe);

for(int i=0;i<v.size();i++){
    a[v[i].second]=i;
}
for(int i=0;i<v.size();i++){
    cout<<a[i]<<" ";
}
cout<<endl;
return 0;
}

