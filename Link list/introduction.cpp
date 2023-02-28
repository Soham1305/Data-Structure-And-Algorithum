// Link list introsuction 

#include <iostream>
#include <vector>
#include <stack>    
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <string> 
#include <map>
#include <set> 
//#include <bits/stdc++.h>

#define vi vector<int>
#define vvi vector <vi> 
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)

using namespace std;

const int N =1e5+9;

class node{
   public :
   int data;
   node* next;

    node(int val){

    data = val;

    next=NULL;
   }

};

void insertattail(node* &head ,int val){

    node* n = new node(val);

    if( head == NULL){

        head = n;
        return ;
    }

    node* temp=head;

    while(temp->next != NULL){

        temp=temp->next;
    }

    temp->next=n;
}

void display(node* head){

    node* temp=head;

    while(temp->next != NULL){

        cout<<temp->data<<" -> ";

        temp = temp -> next ;
    }
    cout<<temp->data<<" -> ";

    cout<<"NULL"<<endl;
}
int main(){

    node* head= NULL;

    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);


    display(head);

    return 0;
}