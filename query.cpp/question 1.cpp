//introduction to queue data structure
//array implimantation of queue
//naver use bits/stdc++ STL for better exp;
#include <iostream>
#define n 100
using namespace std;
class queue{
   int * a;
   int front;
   int back;
   public:
   queue(){
    a=new int[n];
    front=-1;
    back=-1;
   }
   void push(int x){
    if(back==n-1){
        cout<<"queue is overflow"<<endl;
        return ;
    }
    back++;
    a[back]=x;
    if(front==-1){
        front++;
    }

   }
   void pop(){
        if(front==-1|| front>back){
            cout<<"no element in queue "<<endl;
            return ;
        }
        front++;
    }
    int peak(){
        if(front==-1){
            return -1;
        }
        return a[front];
    }
    bool empty(){
        if(front==-1 || front>back){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peak()<<endl;
    q.pop();
    cout<<q.peak()<<endl;
    q.pop();
    cout<<q.peak()<<endl;
    q.pop();
    cout<<q.peak()<<endl;
    q.pop();
    cout<<q.empty()<<endl;

}
