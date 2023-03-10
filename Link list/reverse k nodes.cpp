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

// void reverseknodes(node* &head , int n){

//     int val = 1 ;

//     node* temp = temp->next ;
//     node* nextnode;

//     while( val <=n){

//         nextnode=temp->next ;

//         temp->next=temp  ;

//         temp->next->next=nextnode;

//         temp = temp->next ;

//         val++ ;

//     }

//     return ;
// }

node*  revrseknode( node* &head , int n){

    // if(head -> next == NULL ){

    //     return head ;
    // }

    int val =0 ;
    
    node* prevptr = NULL ;

    node* currptr = head ;

    node* nextptr ;

    while(val< n && currptr != NULL){

        nextptr=currptr->next ;

        currptr->next = prevptr ;

        prevptr = currptr ;

        currptr = nextptr ;

        val ++ ;
    }
    
    if(nextptr != NULL)
    {
        head->next=revrseknode(nextptr,n);
    }
    
    return prevptr ;

}



int main(){

    int k ;

    cin>>k;

    node* head = NULL;

    inseatattail(head ,1 );
    inseatattail(head ,2 );
    inseatattail(head ,3 );
    inseatattail(head ,4 );
    inseatattail(head ,5 );
    inseatattail(head ,6 );
    inseatattail(head ,7 );

    display(head);

   // reverseknodes(head , 2);

   cout<<" your reverse link list goes like this "<<endl;

    node* newhead=revrseknode(head,k);

    display(newhead);


    return  0 ;
}