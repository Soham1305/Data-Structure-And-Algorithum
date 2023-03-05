// doubly link list 

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

    public :

    int data;

    node* prev ;

    node* next ;

    node(int val){

        data= val ;
        next = NULL;

        prev= NULL;

    }
};

void inseratathead(node* &head,int val){

    node* n = new node(val);

    n->next = head ;

    if(head != NULL){

    head ->prev=n ;

    }
    
    head =n ;
   
}

void inseartathead2(node* &head , int val){

  node* n = new node(val);

  n->next = head ;

  if( head != NULL){

    head -> prev = n;
  }

  head = n;

}
void insertsttail(node* &head ,int val){

    node* n = new node(val);

    if(head == NULL){

        inseratathead(head,val);
        return ;
    }

    node* temp = head ;

    while( temp -> next != NULL){

        temp = temp -> next ;
    }

    temp ->next = n;
    n->prev=temp ;

}

void display(node* &head){

    node* temp = head ;

    while(temp != NULL){

       cout<<temp -> data <<" -< " ;

       temp=temp->next ;
    }
    cout<<"NULL"<<endl;
    return ;
}

void deleteathead(node* &head ){

    node* todelete= head ;

    head = head -> next ;
    head ->prev = NULL ;
    delete todelete;
}

void delttion (node* head  , int val ){

    if(head == NULL){

        cout<<"saale pahele kuch add to kar link list me "<<endl;
    }

    node* temp = head ;
    
    while(temp->next->data != val){

        temp=temp->next ;
    }

    node* todelete= temp->next ;

    temp->next =temp ->next ->next  ;

    temp->next->prev= temp->next->prev->prev;

    delete todelete;

    return ;

}

int main(){

    node* head = NULL;

    insertsttail(head , 1);
    insertsttail(head , 2);
    insertsttail(head , 3);
    insertsttail(head , 4);
    insertsttail(head , 5);
    insertsttail(head , 6);

    display(head);

    inseartathead2(head , 666);

    display(head);

    delttion(head , 2);

    display(head);

    deleteathead(head);

    display(head);

    return 0;

}