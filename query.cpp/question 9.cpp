//largest rectangle in a histograme 
//given an array. each element represent 
//the hight to the width of each bar is 1,find the 
//area of rach bar is 1,find the area the area of largest
//rectangle in the histgrame.
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int get_maxarea(vector <int> a){
   int n=a.size();
   int ans=0,i=0;
   a.push_back(0);
   stack<int> st; 
   while(i<n){
      while(!st.empty() && a[st.top()]>a[i]){
        int t=st.top();
        int h=a[t];
        st.pop();

      }
    }
   
}
int main(){
    vector<int> a={2,1,5,6,2,3};
    cout<<get_maxarea(a)<<endl;
    return 0;

}
