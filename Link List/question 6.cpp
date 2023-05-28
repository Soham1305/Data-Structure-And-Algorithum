//dubly link list 
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void inserthead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
     head->prev=n;
    }
    head=n;
}
void insertintrail(node* &head,int val){
    if(head==NULL){
        inserthead(head,val);
        return ;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
         temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;

}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ->"<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void deleteathead(node* &head){
    node* todelete=head;
    head=head->next;
    head->prev=NULL;
    delete todelete;
}

void dletetion(node* &head,int pos){
    if(pos==1){
        deleteathead(head);
        return ;
    }
    
    node* temp=head;
    int count=1;
    while(temp!=NULL&&count!=pos){
      temp=temp->next;
      count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
         temp->next->prev=temp->prev;
    }

    delete temp;
}

int main(){
  node* head=NULL;
  insertintrail(head,1);
  insertintrail(head,2);
  insertintrail(head,3);
  insertintrail(head,4);
  display(head);
  inserthead(head,5);
  display(head);
  dletetion(head,1);
  display(head);
  dletetion(head,3);
  display(head);
  return 0;
}