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

const int N =1e5+7 ;

class node{

    public : 

    int data ;

    node* next ;

    node(int val){

        data = val ;

        next = NULL;
    }
};

void insetattail(node* &head , int val ){

    node* n = new node(val);

    if(head == NULL){

        head = n; 
        return ;
    }

    node* temp = head ;

    while(temp->next != NULL){

        temp = temp ->next ;
    }

    temp->next =n;
}

void display(node* &head ){

    node* temp = head ;

    while( temp != NULL){

        cout<<temp->data<<" -< ";

        temp = temp->next ;

    }

    cout<<"NULL"<<endl;
}

void deleteathed(node* &head ){

    node* temp = head ;

    head = head -> next ;

    delete  temp;
}

void deletion(node* &head,int val){

    if(head->data ==  val){

        deleteathed(head);
        return ;
    }

    node* temp = head ;

    while(temp->next->data != val){

        temp = temp ->next ;

    }

    node* todelete=temp->next ;

    temp->next = temp->next->next ;

    delete todelete ;

}

node* reverse(node* &head){

    if(head == NULL || head ->next == NULL){

        return head ;
    }

    node* prevptr = NULL;

    node* currptr=head ;

    node* nextptr ;

    while(currptr != NULL){

        nextptr = currptr->next ;

        currptr->next = prevptr ;

        prevptr = currptr ;

        currptr = nextptr ;
    }

    return prevptr; 
}

node* recersive(node* &head){

    if( head == NULL || head -> next == NULL){

        return head ;
    }

    node* newhead = recersive(head -> next );

    head->next ->next = head ;

    head -> next = NULL;

    return newhead;

}


int main(){

    node* head = NULL;

    insetattail(head ,1);
    insetattail(head ,2);
    insetattail(head ,3);
    insetattail(head ,4);
    insetattail(head ,5);
    insetattail(head ,6);
    insetattail(head ,7);

    display(head);

    deletion(head , 1);

    display(head);

    node* newhead = reverse(head);

    display(newhead);

    node* hello = NULL;

    insetattail(hello ,1 );
    insetattail(hello,2 );
    insetattail(hello ,3 );
    insetattail(hello,4 );
    insetattail(hello,5 );
    insetattail(hello,6 );
    insetattail(hello,7 );

    node* Hi = recersive(hello);

    display(Hi);

    return 0;
}