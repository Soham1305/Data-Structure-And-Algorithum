// insersen point of two link list ;

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

int lenthofLL(node* &head){

    int count = 1;

    node* temp = head ;

    while(temp -> next != NULL){

        count ++ ;

        temp = temp -> next ;
    }

    return count ;
}

void makeinsertion(node* &head1, node* head2,int pos ){

    node* temp1 = head1 ;

    node* temp2 = head2 ;

    while(pos--){

        temp1= temp1->next ;
    }

    while(temp2->next != NULL){

        temp2= temp2->next ;
    }

    temp2->next = temp1;

}

int intersactpoint(node* &head1 , node* &head2){

    int l = lenthofLL(head1);

    int r = lenthofLL(head2);

    int d ;

    node* temp1 ;

    node* temp2 ;

    if(l>r){
     
      temp1 = head1 ;

      temp2 =head2 ;

     d=l-r;
        
    }else{
    
      temp1=head2;

      temp2=head1;

      d=r-l;

    }

    while(d){

        temp1=temp1->next ;

        if(temp1 == NULL){

            return -1 ;
        }
        d--;
    }

    while(temp1 != NULL && temp2 != NULL){

        if(temp1 == temp2){

            return temp1->data;
        }
        temp1=temp1->next ;
        temp2=temp2->next ;
    }

    return -1;
}

int main(){

    int n1,n2;

    cin>>n1>>n2;

    int a[n1];

    int b[n2];

    for(int i= 0 ;i<n1;i++){

        cin>>a[i];
    }
    for(int i= 0 ;i<n2;i++){

        cin>>b[i];
    }

    node* head1= NULL ;
    node* head2= NULL;

    for(int i =0 ;i<n1;i++){

        insertattail(head1 , a[i]);
    }
    for(int i =0 ;i<n2;i++){

        insertattail(head2 , b[i]);
    }

    makeinsertion(head1,head2,4);

    display(head1);

    display(head2);
    
    cout<<intersactpoint(head1,head2)<<endl;

    return 0;

}