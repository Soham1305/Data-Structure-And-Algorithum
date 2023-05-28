//put even position node after odd position 
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
void evenafterodd(node* &head){
    node* odd=head;
    node* even=head->next;
    node* evenstart=even;
    while(odd->next!= NULL && even->next!= NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
  if(odd->next!=NULL){
    even->next= NULL;
  }

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
    evenafterodd(head);
    display(head);
    return 0;
}