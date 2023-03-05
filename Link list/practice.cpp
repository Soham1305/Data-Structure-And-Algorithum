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

const int N = 1e9+7 ;

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


node* reverseknode2(node* &head , int val){

    node* prevptr=NULL;
    node* nextptr ;

    int count=0;

    node* currptr = head ;

    while(currptr != NULL && count<val ){

        nextptr=currptr -> next ;

        currptr->next = prevptr ;

        prevptr= currptr ;

        currptr= nextptr ;

        count ++; 

    }

    if(nextptr!=NULL){

        head->next=reverseknode2(nextptr,val);
    }

    return prevptr ;
}

class node2{

    public:

    int data1 ;
    node2* nextp;

    node2* prevp;

    node2(int val){

        data1= val ;

        nextp= NULL;

        prevp= NULL;
    }
};

void  insearatheadinDLL(node2* &head, int val){
 
 node2* n = new node2(val);

 n->nextp = head ;

 if( head != NULL ){

   head->prevp=n ;
 }

 head = n;
 return ;

}

void inseratdoublyeLL(node2* &head , int val){

    if(head == NULL){

        insearatheadinDLL(head , val);
        return ;
    }

    node2* n =new node2(val);

    node2* temp = head ;

    while(temp -> nextp != NULL){

        temp = temp->nextp;
    }

    temp->nextp=n;
    n->prevp=temp ;
}

void displayDLL(node2* &head){

    node2* temp = head ;

    while(temp != NULL){

        cout<<temp->data1<<" -< ";
        
        temp = temp -> nextp ;
    }
    cout<<"NULL"<<endl;
    return ;
}

void doublyheadDElete(node2* &head){

    node2* todelete = head ;

    head = head->nextp;
    head->prevp=NULL;

    delete todelete;
}

void doublyDeletation(node2* &head , int val){

    if(head == NULL){

        cout<<"sale kuch to pahele add kar le link list me "<<endl;
    }

    node2* temp = head ;

    while(temp -> nextp->data1 != val){

    temp = temp ->nextp;
    }
    node2* todelete=temp->nextp;

    temp->nextp=temp->nextp->nextp;
    temp->nextp->prevp=temp->nextp->prevp->prevp;

    delete todelete;

    return ;
}

int main(){

    int k ;
    
    cin>>k ;

    node* head = NULL;

    inseatattail(head,1);
    inseatattail(head,2);
    inseatattail(head,3);
    inseatattail(head,4);
    inseatattail(head,5);
    inseatattail(head,6);
    inseatattail(head,7);

    display(head);

    node* newhead=recercive(head);

    display(newhead);

    delettion(newhead,7);

    display(newhead);

    if(search(newhead,6)){

        cout<<"the node is inside of the linklist "<<endl;
    }
    else{

        cout<<"this node is not inside in linklist"<<endl;
    }

    insertathead(newhead,7);

    display(newhead);

    cout<<" the reverse k node be look like this : "<<endl;

    node* head1 = reverseknode2(newhead,2);

    display(head1);

    node2* head2 = NULL;

    inseratdoublyeLL(head2 , 1);
    inseratdoublyeLL(head2 , 2);
    inseratdoublyeLL(head2 , 3);
    inseratdoublyeLL(head2 , 4);
    inseratdoublyeLL(head2 , 5);
    inseratdoublyeLL(head2 , 6);
    inseratdoublyeLL(head2 , 7);
    
    cout<<" your doubly link list goes like this : "<<endl;

    displayDLL(head2);

    doublyDeletation(head2,2);

    cout<<"deletation in doubly link list "<<endl;

    displayDLL(head2);

    doublyheadDElete(head2);

    cout<<"deletion of doubly link list head"<<endl;

    displayDLL(head2);

    return 0;
}