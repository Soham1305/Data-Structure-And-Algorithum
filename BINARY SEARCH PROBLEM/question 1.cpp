// standerd tamplate libary in c++ ( set ) 
// day 77
// date : 10 / 12 / 2022
//video 117
//SET : 1. ordered set 
//      2. inodered set
// 1. ordered set : 1. contain unique element 
//                  2. ilplimented using blances BST 
//                  3. Element are in sorted order 
//                  4. Random acesse is not possible , i.e you cannot get i'th
//                     element in O(1)/O(Long N);
//                  5. Present in #include <set> header file

// 2. multi set : 1. can contain dublicate
//                2. impliment using balances BST;
//                3. Element are in sorted order 
//                4. Rendom access is not possible , i.e you cannot get i'th
//                   element in O(1)/O(Log N)
//                5. present in #include <set> header file

// time complexity : insertion :O(log N);
// Deletion        : O(log N);
// Lower / Upper_Bound : O (log N);


#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;

int main(){

    set <int> s;
    
    s.insert(1);

    s.insert(2);

    s.insert(2);

    s.insert(3);

    for( auto i:s){

        cout<< i<< " ";

    }

    cout<<endl;

    cout<<s.size()<<endl;

     s.erase(2);

    for( auto i:s){
       
       cout<< i << " ";

    
    }

     cout<<endl;

    multiset <int> s1;
    
    s1.insert(1);

    s1.insert(2);

    s1.insert(2);

    s1.insert(3);
     
    s1.insert(3);

    s1.insert(3);

    s1.insert(3);

    s1.insert(3);

    for( auto i:s1){

        cout<< i<< " ";

    }

    cout<<endl;

    cout<<s.size()<<endl;

    s1.erase(3);
    cout<<endl;

    for( auto i:s1){
       
       cout<< i << " ";

    
    }

     cout<<endl;

     s1.erase(s1.find(3));

     for( auto i :s1){

        cout<<i<<" ";
     }

     return 0;
}