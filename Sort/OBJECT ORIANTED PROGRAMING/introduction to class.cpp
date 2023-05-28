//introduction to OOps
#include <bits/stdc++.h>
using namespace std;

class student {
   string name;
   public:      //this is for public data mambers;
   int age;
   bool gender; //0 meance male and 1 meance is female ;
   student(){
      cout<<"this is a defult constructor "<<endl; //this is adefault constructor;
   }
   student(string s,int a,bool g){
      cout<<"this is peramiter constructor"<<endl;
           name=s;
           age=a;   //this call is constructor which call default in 
                    //our function 
           gender=g; //this consrturctor is parameterised constructor 
   }
   student(student &a){
      cout<<"this is a copy constuctor "<<endl;
      name=a.name;
      cout<<name<<endl;
      age=a.age;  
      cout<<age<<endl;              //this is copy constructor ;
      gender=a.gender;
      cout<<gender<<endl;
   }

   void setname(string s){   //this is setter function 
        name=s;
   }
   void getname(){
      cout<<name<<endl;   //to acsses our data mamber from out of class;
   }
   void printobj(){
        cout<<"name= ";
        cout<<name<<endl;
        cout<<"age= ";
        cout<<age<<endl;
        cout<<"gender= ";
        cout<<gender<<endl;
   }

   ~student(){
      cout<<" destrctar is called"<<endl;
   }
   bool operator ==(student &a){
        if(name==a.name && age==a.age && gender == a.gender){
         return true;
        }else{
         return false ;
   }
   }

};
int main (){
   //student a[3];
   //for(int i=0;i<3;i++){
   //   string s;
   //   cin>>s;
   //   a[i].setname(s);
   //                  //this for the geting input from user 
   //   cin>>a[i].age;  //in our class
   // 
   //   cin>>a[i].gender;
   //}
//
   //for(int i=0;i<3;i++){
   //   a[i].printobj();
   //}
   student a("soham",18,0);
   a.printobj();
   student b;
   student c=a;
   if(c==a){
      cout<<"same"<<endl;
   }else{
      cout<<"not same"<<endl;
   }
   
   return 0;
}