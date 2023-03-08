// cicular link list 

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

        data= val ;
        next = NULL ;
    }
};

void insearHEAD(node* &head,int val){

node* n =new node(val);

if(head == NULL){

    n->next = n;
    head = n;
    return; 
}

node* temp = head ;
while( temp->next != head){

    temp = temp->next ;
}

temp->next = n;
n->next= head ;
head = n;
return; 

}

void insearT(node* &head ,int val){

    node* n = new node(val);

    if(head == NULL){

        insearHEAD(head,val);
        return ;
    }

    node* temp = head; 

    while(temp->next !=  head){

        temp= temp->next ;
    }
    
    temp->next =n ;
    n->next = head ;

}

void display(node* &head){

    node* temp = head ;

    do{
        cout<<temp->data<<" -> ";
        temp = temp->next ;
    }while(temp != head);

    cout<<"NULL"<<endl;
    return;
}

void deleteHEAD(node* &head){

    node* temp = head ;

    while(temp->next != head){

        temp= temp->next ;
    }
    temp->next = temp->next->next ;
    head = head->next ;
    return; 
}

void delation(node* &head ,int pos){

    node* temp = head ;
    
    int count = 1; 

    if(pos == 1){
   
     deleteHEAD(head);
     return;

    }

    while(count != pos-1){

        temp=temp->next ;
    }

    node* todelete = temp->next ;

    temp->next =temp->next->next ;

    delete todelete ;
    return;
}

int main(){

    node* head = NULL ;

    int n;
    cin>>n;

    int a[n];

    for(int i= 0 ;i<n;i++){

        cin>>a[i];
    }

    for(int i = 0;i<n;i++){

        insearT(head, a[i]);
    }

    display(head);

    delation(head,2);

    display(head);
    delation(head,1);

    display(head);
    
    return 0 ;


}