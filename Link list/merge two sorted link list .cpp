// merge to sorted link list 

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

const int N = 1e5+7 ;

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

node* newL(node* &head1, node* head2){
   
   node* n = new node(-1);
   node* ptr1=head1;
   node* ptr2=head2;
   node* ptr3=n;

   while(ptr1  != NULL && ptr2  != NULL){

    if(ptr1->data < ptr2->data){

        ptr3->next=ptr1;
        ptr1=ptr1->next ;
    }
    else{

        ptr3->next=ptr2;
        ptr2=ptr2->next ;

    }
    ptr3 = ptr3->next ;
   }

   while(ptr1  != NULL){

    ptr3->next = ptr1;
    ptr3=ptr3->next ;
    ptr1=ptr1->next ;
   }
   while(ptr2  != NULL){

    ptr3->next = ptr2;
    ptr3=ptr3->next ;
    ptr2=ptr2->next;
   }

   return n->next;

}

node* recersivemerge(node* &head1,node* &head2){

    if(head1 == NULL){

        return head2;
    }

    if(head2 == NULL){

        return head1;
    }

    node* result ;

    if(head1->data < head2->data){
   
    result=head1;
    result->next=recersivemerge(head1->next,head2);

    }else{

        result=head2;
        result->next=recersivemerge(head1,head2->next);
    }

    return result;
}

int main(){

    int n,m;

    cin>>n>>m;

    int a[n],b[m];

    for(int i = 0;i<n;i++){

        cin>>a[i];
    }
    for(int i = 0;i<m;i++){

        cin>>b[i];
    }

    node* head1 = NULL ;

    node* head2 = NULL ;

    for(int i = 0;i<n;i++){

       insertattail(head1,a[i]);
    }

    for(int i = 0;i<m;i++){

       insertattail(head2,b[i]);
    }

    display(head1);

    display(head2);

   // node* newlist=newL(head1,head2);

    //display(newlist);

    node* LL =recersivemerge(head1,head2);

    display(LL);

    return 0;
}