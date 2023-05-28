//the stock problem
//#include <iostream>
//#include <stack>
//#include <vector>
//#include <bits/stdc++.h>
//using namespace std;
//vector<int> stock(vector<int> a){
//    vector<int> ans;
//    stack<pair<int,int>> s;
//    for(auto i:a){
//        int days=1;
//        while(!s.empty() && s.top().first<=i){
//                days+=s.top().second;
//                s.pop();
//        }
//        s.push({i,days});
//        ans.push_back(days);
//    }
//    return ans;
//
//}
//int main(){
//    vector<int> a={100,80,60,70,60,75,85};
//    vector<int> res =stock(a);
//    for(auto i: res){
//        cout<<i<<" ";
//
//    }
//    cout<<endl;
//    return 0;
//}
//#include <bits/stdc++.h>
//using namespace std;
//vector<int> span(vector<int> prices){
//    vector<int> ans;
//    stack<pair<int,int>> s;
//    for(auto i: prices){
//      int days=1;
//      while(!s.empty() && s.top().first <=i){
//        days+=s.top().second;
//        s.pop();
//      }
//      s.push({i,days});
//      ans.push_back(days);
//    }
//    return ans;
//}
//int main(){
//    vector <int> a={100,80,60,70,60,75,85};
//    vector<int> res=span(a);
//    for(auto i: res){
//        cout<<i<<" "; 
//    }
//    cout<<endl;
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
vector <int> span(vector <int> price){
    vector <int> ans;
    stack<pair<int,int>> s;
    for(auto i:price){
        int days=1;
        while(!s.empty() && s.top().first <=i){
            days+=s.top().second;
            s.pop();
        }
        s.push({i,days});
        ans.push_back(days);
    }
   return ans;
}
int main(){
    vector<int> a={100,80,60,70,60,75,85};
    vector<int> res=span(a);
    for(auto i:res){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
