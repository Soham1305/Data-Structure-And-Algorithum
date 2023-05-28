//creating a node and isert a node using class ;
//#include <bits/stdc++.h>
//using namespace std;
//
//class node{
//    public:
//    int data;
//    node* next;
//
//    //node class condtructor 
//    node (int val){
//        data=val;
//        next=NULL;
//    }
//};
//
//void inserttrail(node* &head,int val){
//    node* n=new node(val);
//    if(head==NULL){
//        head=n;
//        return ;
//    }
//    node* temp=head;
//    while(temp->next!=NULL){
//        temp=temp->next;
//    }
//    temp->next=n;
//
//}
//
//void display(node *head){
//    node* temp=head;
//    while(temp!=NULL){
//        cout<<temp->data<<"-<"<<" ";
//        temp=temp->next;
//     }
//    cout<<"NULL"<<endl;
//}
//void insertinginhead(node* &head,int val){
//    node* n=new node(val);
//    n->next=head;
//    head=n;
//}
//bool search (node *head,int key){
//    node* temp=head;
//    while(temp->next!=NULL){
//        if(temp->data==key){
//            return true;
//        }
//        temp=temp->next;
//    }
//    return false;
//}
//
//int main(){
// node* head=NULL;
// inserttrail(head,1);
// inserttrail(head,2);
// inserttrail(head,3);
// display(head);
// insertinginhead(head,4);
// display(head);
// cout<<search(head,1);
// return 0;
//}
//
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node (int val){
        data=val ;
        next=NULL;
    }
};
void insertintail(node* &head,int val){
    node* n=new node (val);
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
        cout<<temp->data<<"-< ";
        temp=temp->next;
     }
     cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    insertintail(head,1);
    insertintail(head,2);
    insertintail(head,3);
    insertintail(head,4);
    display(head);
    return 0;

}