//circular link list 
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
void insertathead(node* &head,int val){
node* n=new node(val);
if(head==NULL){
    n->next=n;
    head=n;
    return;
}
node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}
void indertattail(node* &head,int val){
    if(head==NULL){
        insertathead(head,val);
        return ;
    }
    node* n=new node(val);
    
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void display(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<"->"<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<"NULL"<<endl;
}
void deleteathead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node* todelete=head;
    temp->next=head->next;
    head=head->next;
    delete todelete;
}
void deleteatbody(node* &head,int pos){
    if(pos==1){
        deleteathead(head);
        return ;
    }
    node* temp=head;
    int count=1;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
int main(){
    node* head=NULL;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        indertattail(head,a[i]);
    }
    display(head);
    deleteatbody(head,2);
    display(head);
    deleteathead(head);
    display(head);
    return 0;
}