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

const int N =1e9+7;

class node{

    public : 
    int data ;
    node* next ;

    node(int val){

        data=val ;

        next=NULL;

    }
};

void insertattail(node* &head ,int val){

    node* n = new node(val);

    if( head == NULL){

        head = n; 

        return ;
    }

    node* temp=head ;

    while(temp->next != NULL){

        temp = temp->next;
    }

    temp->next=n;
    
}

void display(node* &head){

    node* temp=head ;

    while(temp != NULL){

        cout<<temp->data<<" -< ";

        temp=temp->next ;
    }
    cout<<" NULL ";

    cout<<endl;
    
}

node* deleteathead(node* &head){

    node* todelete = head ;
    head=head->next ;
    delete todelete ;
}

node* deletion(node* &head , int val ){

    if( head == NULL || head -> next == NULL){

        delete head ;
    }

    node* temp = head ;

    while(temp->next->data != val){

        temp = temp -> next ;

    } 
    node* todelete=temp->next ;
    temp->next = temp->next->next ;

    delete todelete ; 
}

node* reverse(node* &head){

    node* prevptr=NULL;

    node* currptr=head ;

    node* nextptr ;

    while( currptr != NULL){
        
        nextptr= currptr->next ;
        currptr->next = prevptr ;

        prevptr = currptr ;
        currptr=nextptr ;
        
    }

    return prevptr ;
}

node* recersive(node* &head ){
  
if( head == NULL || head -> next == NULL){

    return head ; 
}

node* newhead=recersive(head->next);
head -> next->next=head ;
head->next = NULL ;

return newhead ;

}
int main(){

    node* head = NULL;

    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    insertattail(head,7);

    display(head);

    deletion(head,2);

    display(head);

    deleteathead(head);

    display(head);

    node* newhead = NULL;

    insertattail(newhead , 1);

    deleteathead(newhead);

    display(newhead);

    node* newHead=reverse(head);

    display(newHead);

    node* hi=NULL;

    insertattail(hi,1);
    insertattail(hi,2);
    insertattail(hi,3);
    insertattail(hi,4);
    insertattail(hi,5);
    insertattail(hi,6);

    node* Mynewhead=recersive(hi);

    display(Mynewhead);

    return 0 ;
}