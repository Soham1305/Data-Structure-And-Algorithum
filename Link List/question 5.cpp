//detaction ans removel cycle from link list 
#include <bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node* next;
  node(int val){
    data=val;
    next=NULL;
  }
};
void inserttrail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -<"<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}
bool detectcycle(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}
void makecycle(node* &head , int pos){
    node* temp=head;
    node* startnode;
    int count =1;
    while(temp->next!=NULL){
        if(count==pos){
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
}
void removecycle(node* &head){
    node* slow=head;
    node* fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
int main(){
   node* head=NULL;
    inserttrail(head,1);
    inserttrail(head,2);
    inserttrail(head,3);
    inserttrail(head,4);
    inserttrail(head,5);
    inserttrail(head,6);
    inserttrail(head,7);
    display(head);
    makecycle(head,3);
    cout<<detectcycle(head)<<endl;
    removecycle(head);
    cout<<detectcycle(head)<<endl;
    display(head);

    return 0;
}