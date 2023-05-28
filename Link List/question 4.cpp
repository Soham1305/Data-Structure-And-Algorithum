//reverse a K node in linked list 
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
node* reversek(node* &head ,int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }

    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);
    }
    return prevptr;
}
int main(){
    node* head=NULL;
    inserttrail(head,1);
    inserttrail(head,2);
    inserttrail(head,3);
    inserttrail(head,4);
    inserttrail(head,5);
    inserttrail(head,6);
    display(head);
    int k=2;
    node* newhead=reversek(head,k);
    display(newhead);
    return 0;
}
