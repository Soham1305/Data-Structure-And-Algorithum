// LINK LIST 

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

node* recersive(node* &head){

    if(head == NULL || head ->next == NULL){
        
        return head ;

    }

    node* newhead = recersive(head->next);

    head->next->next = head ;

    head->next = NULL ;

    return newhead ;
}

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

int sizeofLL(node* &head ){

    node* temp= head ;

    int count =  0 ;

    while(temp != NULL){

        count ++ ;
        temp = temp ->next ;
    }

    return count ;
}

node* appendknode(node* &head,int k ){

    int n ;n= sizeofLL(head);

    node* tail = head ;

    node* newtail;

    node* newhead ;

    int count = 1; 

    while(tail->next != NULL){

      if(count == n-k){

        newtail = tail->next;

        newhead=newtail->next ;
      }

      tail = tail->next ;
      
      count ++ ;
    }
    newtail ->next  = NULL;

    tail->next =head ;

    return newhead ;
}

node* mergeLL(node* &head1,node* &head2){

    node* dummynode= new node(-1);

    node* p1= head1 ;

    node* p2= head2 ;

    node* p3= dummynode;

    while(p1 != NULL && p2 != NULL){

        if(p1->data < p2->data){

            p3->next =p1 ;
            p1= p1->next;
        }else{

            p3->next= p2;
            p2=p2->next ;
        }
        p3= p3->next ;
    }
    while(p1 != NULL){

        p3->next = p1;
        p1=p1->next ;
        p3=p3->next ;
    }
    while(p2 != NULL){

        p3->next = p2;
        p2=p2->next ;
        p3=p3->next ;
    }

    return dummynode->next;
}

node* recersivemegeLL(node* &head1 , node* &head2){

    if(head1==NULL){

        return head2;
    }
    if(head2==NULL){

        return head1;
    }

    node* result ;

    if(head1->data< head2->data){

    result = head1; 
    result ->next = recersivemegeLL(head1->next,head2);
    }
    else{

    result = head2; 
    result ->next = recersivemegeLL( head1 , head2->next );
    }

    return result ;
}

void makinginsersion(node* &head1,node* &head2,int pos){

node* temp1= head1 ;

node* temp2 = head2 ;

while(pos != 0){
    temp1= temp1->next ;
    pos--;
}
while(temp2->next != NULL){

    temp2 =temp2->next ;
}
temp2->next = temp1;
return ;
}

int findpoint(node* &head1 , node* &head2){
int d ;
int count = 1;

int l=sizeofLL(head1);
int r=sizeofLL(head2);

node* temp1;
node* temp2;

if(l>r){

    d=l-r;
    temp1=head1;
    temp2=head2;
}
else{

    d=r-l;
    temp1=head2;
    temp2=head1;
}
while(d){
    temp1=temp1->next ;
    if(temp1 == NULL){
        
        return -1;
    }
    d--;
}
while(temp1 != NULL && temp2 != NULL ){

  if(temp1== temp2){
    return temp1->data;
  }
   temp1=temp1->next ;
   temp2=temp2->next ;
}
return -1;
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

    //append last k node  ;

    node* head3 = NULL ;

    inseatattail(head3 , 1);
    inseatattail(head3 , 2);
    inseatattail(head3 , 3);
    inseatattail(head3 , 4);
    inseatattail(head3 , 5);
    inseatattail(head3 , 6);
    inseatattail(head3 , 7);
    inseatattail(head3 , 8);

    node* head5=recersive(head3);

    display(head5);

    node* head7 = NULL ;

    inseatattail(head7 , 1);
    inseatattail(head7 , 2);
    inseatattail(head7 , 3);
    inseatattail(head7 , 4);
    inseatattail(head7 , 5);
    inseatattail(head7 , 6);
    inseatattail(head7 , 7);
    inseatattail(head7 , 8);

    cout<<"appennd k node "<<endl;

    cout<<"Link list : "<<endl;

    display(head7);


    node* head10 = appendknode(head7,k);
   
    cout<<"Append Link List "<<endl;

    display(head10);

    int n,m;

    cin>>n>>m;

    node* head11= NULL ;

    node* head12= NULL;

    int a[n],b[m];

    for(int i =0;i<n;i++){

        cin>>a[i];
    }
    for(int i =0;i<m;i++){

        cin>>b[i];
    }

    for(int i= 0;i<n;i++){

        inseatattail(head11,a[i]);
    }
    for(int i= 0;i<m;i++){

        inseatattail(head12,b[i]);
    }

    cout<<"Merge two sorted link list : "<<endl;

    display(head11);

    display(head12);

    //node* head13=mergeLL(head11,head12);

    node* head14=recersivemegeLL(head11, head12);

    display(head14);
    
    cout<<"Find Two link list intersaction point : "<<endl;

    node* head15=NULL;

    node* head16= NULL;

    int n1,m1;

    cin>>n1>>m1;

    int c[n1];

    int d[m1];

    for(int i= 0 ;i<n1;i++){

        cin>>c[i];
    }
    for(int i= 0 ;i<m1;i++){

        cin>>d[i];
    }

    for(int i = 0 ;i<n1;i++){
        
        inseatattail(head15,c[i]);
    }
    for(int i = 0 ;i<m1;i++){
        
        inseatattail(head16,d[i]);
    }

    display(head15);
    display(head16);

    makinginsersion(head15,head16,4);

    display(head15);
    display(head16);

    cout<<" the intersacting point is : "<<findpoint(head15,head16)<<endl;

    return 0;
}