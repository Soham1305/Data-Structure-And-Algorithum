//sliding windows maximum;
//using regular mathode using vector;
//given array [1,3,-1,5,3,6,7] , here k is 3;
//time complexity is O(n*log(n));
//#include <iostream>
//#include <vector>
//#include <stack>
//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//  int n,k;
//  cin>>n>>k;
//  vector<int> a(n);
//  for(auto &i:a){
//    cin>>i;
//  }
//
// multiset<int,greater<int>> s;
// vector<int> ans;
// for(int i=0;i<k;i++){
//    s.insert(a[i]);
// }
// ans.push_back(*s.begin());
// for(int i=k;i<n;i++){
//    s.erase(s.lower_bound(a[i-k]));
//    s.insert(a[i]);
//    ans.push_back(*s.begin());
// }
// for(auto i: ans){
//    cout<<i<<" ";
// }
//
//  return 0;
//}
//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//    int n,k;
//    cin>>n>>k;
//    vector<int> a(n);
//    for(auto &i:a){
//        cin>>i;
//    }
//    multiset<int,greater<int>> s;
//    vector<int> ans;
//    for(int i=0;i<k;i++){
//     s.insert(a[i]);
//    }
//    ans.push_back(*s.begin());
//    for(int i=k;i<n;i++){
//        s.erase(s.lower_bound(a[i-k]));
//        s.insert(a[i]);
//        ans.push_back(*s.begin());
//    }
//    for(auto i:ans){
//        cout<<i<<" ";
//    }
//    return 0;
//}
//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//    int n,k;
//    cin>>n>>k;
//    vector<int> a(n);
//    for(auto &i:a){
//        cin>>i;
//    }
//    multiset<int,greater<int>> s;
//    vector<int> ans;
//    for(int i=0;i<k;i++){
//        s.insert(a[i]);
//    }
//    ans.push_back(*s.begin());
//    for(int i=k;i<n;i++){
//        s.erase(s.lower_bound(a[i-k]));
//        s.insert(a[i]);
//        ans.push_back(*s.begin());
//    }
//    for(auto i:ans){
//        cout<<i<<" ";
//    }
//    return 0;
//}
//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//    int n,k;
//    cin>>n>>k;
//    vector<int> a(n);
//    for(auto &i:a){
//        cin>>i;
//    }
//    multiset<int,greater<int>> s;
//    vector<int> ans;
//    for(int i=0;i<k;i++){
//        s.insert(a[i]);
//    }
//    ans.push_back(*s.begin());
//    for(int i=k;i<n;i++){
//        s.erase(s.lower_bound(a[i-k]));
//        s.insert(a[i]);
//        ans.push_back(*s.begin());
//    }
//    for(auto i:ans){
//        cout<<i<<" ";
//    }
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    multiset<int,greater<int>> s;
    vector<int> ans;
    for(int i=0;i<k;i++){
        s.insert(a[i]);
    }
    ans.push_back(*s.begin());
    for(int i=k;i<n;i++){
        s.erase(s.lower_bound(a[i-k]));
        s.insert(a[i]);
        ans.push_back(*s.begin());
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;


}