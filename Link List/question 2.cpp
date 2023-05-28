//deletation of linked list 
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    // condtructor of node 
    node(int val){
        data = val;
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

void display(node *head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-<"<<" ";
        temp=temp->next;
     }
    cout<<"NULL"<<endl;
}
void adelete(node* head,int val){
  node* temp=head;
  while(temp->next->data!=val){
    temp=temp->next;
  }
  node* todelete=temp->next;
  temp->next=temp->next->next;
  delete todelete;
}
void insertinginhead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
bool search (node *head,int key){
    node* temp=head;
    while(temp->next!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deleteathead(node* &head){
    if(head==NULL){
        return ;
    }
    if(head->next==NULL){
        deleteathead(head);
        return ;
    }
   node* todelete=head;
   head=head->next;
   delete todelete;
}
int main(){
    node* head=NULL;
    inserttrail(head,1);
    inserttrail(head,2);
    inserttrail(head,3);
    adelete(head,2);
    display(head);
    deleteathead(head);
    display(head);
    return 0;
}