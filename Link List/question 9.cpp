//merge two link list 
#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node*next;
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
node* merge(node* &head1,node* &head2){
node* ptr1=head1;
node* ptr2=head2;
node* newnode=new node (-1);
node* ptr3=newnode;
while(ptr1!=NULL && ptr2!= NULL){
    if(ptr1->data<ptr2->data){
        ptr3->next=ptr1;
        ptr1=ptr1->next;
    }else{
        ptr3->next=ptr2;
        ptr2=ptr2->next;
    }
    ptr3=ptr3->next;
}
while(ptr1!=NULL){
    ptr3->next=ptr1;
    ptr1=ptr1->next;
    ptr3=ptr3->next;
}
while(ptr2!=NULL){
    ptr3->next=ptr2;
    ptr2=ptr2->next;
    ptr3=ptr3->next;
}
return newnode->next;

}
node* mergerecercive(node* &head1,node* &head2){
    if(head1==NULL){
        return head2;
    }if(head2==NULL){
        return head1;
    }
    node* result;
    if(head1->data<head2->data){
        result=head1;
        result->next=mergerecercive(head1->next,head2);
        
    }else{
        result=head2;
        result->next=mergerecercive(head1,head2->next);
    }
    return result;
}
int main(){
node* head1=NULL;
node* head2=NULL;
int n1,n2;
cin>>n1>>n2;
int a[n1]; int b[n2];
for(int i=0;i<n1;i++){
    cin>>a[i];
}
for(int i=0;i<n2;i++){
    cin>>b[i];
}
for(int i=0;i<n1;i++){
    inserttrail(head1,a[i]);
}
for(int i=0;i<n2;i++){
    inserttrail(head2,b[i]);
}
display(head1);
display(head2);
//node* newhead=merge(head1,head2);
//display(newhead);
node* newhead=mergerecercive(head1,head2);
display(newhead);
return 0;

}