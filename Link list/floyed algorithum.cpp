// floyed's algorithum ;

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

const int N =1e5+7;

class node{

    public:

    int data;
    node* next ;

    node(int val){

        data=val;

        next=NULL;
    }
};

node* slowptr ;
void insertattail(node* &head,int val){

    node* n= new node(val);
    
    if(head == NULL){

        head = n;
        return;
    }
    node* temp=head;

    while(temp->next != NULL){

        temp = temp->next;
    }

    temp->next=n;

}

void display(node* &head){

    node* temp= head;

    while(temp != NULL){

        cout<<temp->data<<" -< ";

        temp=temp->next;
    }
    cout<<"NULL";

    cout<<endl;
}

void makecycle(node* head , int pos ){

    node* temp =head ;

    node* making;

    int count = 0 ;

    while(temp->next != NULL ){

        if(count == pos){

         making = temp ;
        }

        temp =temp ->next ;

        count ++ ;
    }

    temp -> next = making ;
}

bool detectcycle(node* &head ){

    node* slow = head ;

    node* fast  = head ;

    while( slow  != NULL & fast != NULL){

        slow = slow ->next ;

        fast = fast ->next->next ;

        if(slow->data == fast->data){

            slowptr = slow ;

            return true;
        }

    }

    return false ;
}

void removecycle(node* &head){

    node* fast = head ;

    node* slow = head ;

    do{
        slow = slow->next ;

        fast = fast -> next ->next ;

    }while(slow != fast );

    fast = head ;

    while(fast->next != slow->next){

        slow = slow->next ;

        fast = fast ->next ;

    }

    slow -> next = NULL;

    return ;

}

void removecycle2(node* &head){

    node* fast = head ;

    while( slowptr->next != fast->next){

        slowptr=slowptr->next ;

        fast = fast->next ;
    }

    slowptr->next = NULL;
}
int main(){

    node* head = NULL;

    insertattail(head , 1);
    insertattail(head , 2);
    insertattail(head , 3);
    insertattail(head , 4);
    insertattail(head , 5);
    insertattail(head , 6);
    insertattail(head , 7);

    display(head);

    makecycle(head,4);


    if(detectcycle(head)){

        cout<<"there is cycle present in link list  "<<endl;
    }
    else {

        cout<<"there is no cycle present in link list "<<endl;
    }

    removecycle2(head);

    display(head);

    return 0 ;

}