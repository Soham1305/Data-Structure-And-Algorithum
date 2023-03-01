// reverese a link list using recercive method 

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

const int N = 1e5+7;

class node{

    public:

    int data;
    node* next ;

    node(int val){

        data = val;

        next = NULL;
    }
};

void insertattail(node* &head , int val){

    node* n = new node(val);

    if(head == NULL){

        head =n ;
        return ;
    }

    node* temp = head;

    while(temp->next != NULL){

        temp = temp->next;
    }

    temp->next = n; 
}

void display(node* &head){

    node* temp = head ;

    while(temp != NULL){

        cout<<temp->data<<" -> ";

        temp = temp->next;

    }

    cout<<"NULL";
    cout<<endl;
}

void deleteathead(node* &head){

    node* todelete= head;

    head = head->next;

    delete todelete ;
}

void deletation(node* &head ,int val){

    node* temp = head ;

    if(head == NULL){

     return ;
    }

    if(head->next == NULL){

        deleteathead(head);

        return ;
    }

    while(temp->next->data != val){

        temp = temp -> next ;

    }

    node* todelete = temp->next ;

    temp->next= temp->next->next;

    delete todelete;
}

node* reverse(node* &head){

    if( head == NULL  || head->next == NULL ){

       return head;
    }

    node* newhead=reverse(head->next);

    head->next->next=head;
    head->next=NULL;

   return newhead;
}

int main(){

 node* head = NULL;

 insertattail(head,1);  
 insertattail(head,2);  
 insertattail(head,3);  
 insertattail(head,4);  
 insertattail(head,5);  
 insertattail(head,6);  

 display(head);

 node* newhead=reverse(head);

 display(newhead);
 return 0;
}