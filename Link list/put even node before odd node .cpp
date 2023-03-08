

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

class node{

    public:

    int data;
    node* next;

    node(int val){

        data=val;
        next= NULL;
    }
};

void insertattail(node* &head, int val){

    node* n = new node(val);
  
    if( head == NULL){

        head = n;

        return ;
    }
    node* temp = head;

    while(temp->next != NULL){

        temp = temp->next;
    }
    temp->next=n ;

}

void display (node* &head ){

    node* temp = head ;

    while( temp != NULL){

        cout<<temp->data<<" -< ";

        temp = temp -> next ;
    }
    cout<<"NULL";
    cout<<endl;
}

void deleteathead(node* &head ){

    node* todelete = head;

    head = head->next;

    delete todelete ;
}


void deletation(node* &head , int val){

    if(head == NULL){

        return ;
    }

    if(head -> next == NULL){

        deleteathead(head);
        return ;
    }

    node* temp = head;

    while( temp->next->data != val){
  
    temp = temp->next ;

    }
    node* todelete = temp ->next;

    temp->next=temp->next->next;

    delete todelete;
}

void GAME(node* &head){

    node* odd = head ;
    node* even= head->next ;
    node* evenstart = even ;

    while( odd -> next != NULL && even ->next != NULL ){
        odd -> next = even->next ;
        odd= odd ->next ;
        even->next = odd->next ;
        even = even->next ;
    }    
    odd ->next = evenstart;
    if(odd->next != NULL){

        even->next = NULL ;
    }

}

int main(){

    node* head = NULL ;

    int n;
    cin>>n;

    int a[n];

    for(int i= 0 ;i<n;i++){

        cin>>a[i];
    }

    for(int i = 0 ;i<n;i++){

        insertattail(head, a[i]);

    }

    display(head);

    GAME(head);

    display(head);

    return 0 ;
}
