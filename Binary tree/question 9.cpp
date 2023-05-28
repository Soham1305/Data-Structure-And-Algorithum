//level order trivarsal 
//some of k level node in binary search tree 

#include <bits/stdc++.h>
using namespace std;

struct node{
    
    int data;
    node* left ;
    node* right ;

    node(int val){

        data=val;
        left=NULL;
        right=NULL;
    }
};

void printlevelorder(node* root){
     
    if(root == NULL){

        return ;

    }

    queue <node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        node* hi=q.front();
        q.pop();

        if(hi!=NULL){
            cout<<hi->data<<" ";

            if(hi->left !=NULL){
                q.push(hi->left);
            }

            if(hi->right != NULL){
                q.push(hi->right);
            }
            else if(!q.empty()){
                q.push(NULL);
            }
        }


    }
    
    cout<<endl;

}

int sumatk( node* root , int k ){

    if(root ==NULL){

        return -1;

    }

    queue <node*> q;
    q.push(root);
    q.push(NULL);

    int level=0;
    int sum=0;

    while(!q.empty()){

        node* soham=q.front();
        q.pop();
        if(soham != NULL){

            if(level==k){

                sum += soham->data;

            }

            if(soham->left != NULL){

                q.push(soham->left);

            }

            if(soham->right != NULL){

                q.push(soham->right);

            }

            
        }
        else if(!q.empty()){

                q.push(NULL);
                level++;
        }
    }
    return sum;
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left= new node(6);
    root->right->right= new node(7);

    printlevelorder(root);

    cout<<sumatk(root,2)<<endl;

    return 0;
}