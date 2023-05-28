//append last k nodes
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
int  length(node *head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
node* kappend(node* &head,int k){
      node* newhead;
      node* nexttail;
      node* tail=head;
      int l=length(head);
      int count=1;
      k=k%l;
      while(tail->next!=NULL){
        if(count==l-k){
            nexttail=tail;
        }
        if(count==l-k+1){
            newhead=tail;
        }
        tail=tail->next;
        count++;
      }
      nexttail->next=NULL;
      tail->next=head;
      return newhead;
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
        inserttrail(head,a[i]);
    }
    display(head);
    node* newhead=kappend(head,3);
    display(newhead);
    return 0;

}