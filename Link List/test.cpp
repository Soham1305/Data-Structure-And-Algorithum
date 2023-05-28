//creating a link list 
#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node* next;
    //creating an cstructor 
    node (int val){
        data=val;
        next=NULL;
    }
};
void inserttrail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-<"<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}
void insertinginhead(node* &head,int val){
 node* n=new node(val);
 n->next=head;
 head=n;
}
bool search(node *head,int key){
    node* temp=head;
    while(temp->next!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deletenode(node *head,int val){
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;

}
void deletenodehead(node* &head){
    if(head==NULL){
        return ;
    }
    if(head->next==NULL){
        deletenodehead(head);
        return ;
    }
   node* todelete=head;
   head=head->next;
   delete todelete;
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
node* reverserecersive(node* &head){
    if(head==NULL||head->next==NULL){
        return head;
    }

    node* newhead=reverserecersive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
int main(){
    node* head=NULL;
    inserttrail(head,1);
    inserttrail(head,2);
    inserttrail(head,3);
    display(head);
    insertinginhead(head,4);
    display(head);
    cout<<search(head,2)<<endl;
    deletenode(head,3);
    display(head);
    deletenodehead(head);
    display(head); 
    //node* newhead=reverse(head);
    //display(newhead);
    node* newhead=reverserecersive(head);
    display(newhead);

    return 0;
}