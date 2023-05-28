//how to reverse  a linklist 
#include <bits/stdc++.h>
using namespace std;
class node {
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

void display(node *head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-<"<<" ";
        temp=temp->next;
     }
    cout<<"NULL"<<endl;
}
node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
int main(){
    node* head=NULL;
    inserttrail(head,1);
    inserttrail(head,2);
    inserttrail(head,3);
    display(head);
    node* newhead=reverse(head);
    display(newhead);
    return 0;

}