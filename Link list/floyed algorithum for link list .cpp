// floyed's algorithum for link list cycle detection 

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

const int N  =1e5+7 ;

class node{

    public : 

    int data ;

    node* next ;

    node(int val){

        data = val ;

        next = NULL;
    }
};

void inseatattail(node* &head ,int val ){

    node* n = new node(val);

    if( head == NULL){

        head = n;
        return ;
    }

    node* temp = head ;

    while( temp ->next != NULL){

        temp = temp -> next ;

    }

    temp ->next =n ;
}

void display(node* &head ){

    node* temp = head ;

    while(temp != NULL){

        cout<<temp->data<<" -> ";
        temp = temp->next ;
    }

    cout<<"NULL"<<endl;
}

node* recercive(node* &head){

    if(head ->next == NULL){

        return head ;
    }

    node* prevptr=NULL;

    node* currptr = head;

    node* nextptr;

    while(currptr != NULL){
   
    nextptr = currptr->next ;

    currptr->next = prevptr ;

    prevptr=currptr ;

    currptr = nextptr ;

    }

    return prevptr;
}


void deleteathead(node* &head){

    node* todelete=head; 

    head = head->next;

    delete todelete ;
}

void delettion(node* &head , int val){

    node* temp = head ;

    if(temp->data == val){

        deleteathead(head);
        return ;
    }

    while( temp ->next->data != val){

        temp= temp ->next ;
    }
    node* todelete=temp->next;

    temp->next = temp ->next ->next ;

    delete todelete;
}

bool search(node* &head ,int val){

    node* temp = head ;

    if(head -> data == val){

        return true;
    }
    

    while(temp != NULL){

        if(temp->data == val){

            return true;
        }
        temp=temp->next ;
    }

    return 0;
}

void insertathead(node* &head ,int val ){

    node* n= new node(val);

    n->next=head;

    head = n ;

    return ;
}

void makecycle(node* &head ,int position ){

    node* temp = head ;

    node* supernode;

    int count = 0 ;

    while(temp->next != NULL){

    if(count == position ){
       
       supernode=temp ;
      
    }
    temp = temp -> next ;

    count ++ ;
    }

    temp->next = supernode ;
    return ;
}

bool detect(node* &head ){

    node* slow ;
    node* fast ;

    while( slow != NULL && fast != NULL){

        slow = slow -> next ;

        fast = fast ->next -> next ;

        if( slow == fast ){

            return true ;
        }
    }

    return false ;
}

node* cycledelete(node* &head ){

}

int main(){

    node* head = NULL;

    inseatattail(head , 1 );
    inseatattail(head , 2 );
    inseatattail(head , 3 );
    inseatattail(head , 4 );
    inseatattail(head , 5 );
    inseatattail(head , 6 );
    inseatattail(head , 7 );

    display(head);

    makecycle(head,4);

    if(detect(head)){

        cout<<"the cycle is present in  this perticular link list "<<endl;
    }else{
        cout<<"there is no cycle is present in this perticular link list "<<endl;
    }

    return 0 ;
}