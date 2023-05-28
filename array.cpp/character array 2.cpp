//find maximum lenth of world in enter sentence
#include<bits/stdc++.h>
using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    cin.ignore();
//    char a[n+1];
//    cin.getline(a,n);
//    cin.ignore();
//    int cur=0;
//    int max_num=INT_MIN;
//    for(int i=0;i<n+1;i++){
//        if(a[i]!='\0'||a[i]!=' '){
//            cur++;
//            max_num=max(max_num,cur);
//        }else {
//            cur=0;
//        }
//    }
//    cout<<max_num<<endl;
//    return 0;
//
//}
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    int max=0;int cur=0;int i=0;
    while(1){
        if(a[i]=='\0'||a[i]==' '){
            if(cur>max){
                max=cur;
            }
            cur=0;
        }else{
         cur++;
        }
        if(a[i]=='\0'){
            break;
        }
        i++;
        
    }
    cout<<max<<endl;
    return 0;
}
//#include <bits/stdc++.h>
//sing namespace std;
//nt  main(){
//   int n;
//   cin>>n;
//   cin.ignore();
//   char a[n+1];
//   cin.getline(a,n);
//   cin.ignore();
//   int cur=0; int max=0;
//   int i=0;
//   while(1){
//       
//       if(a[i]==' '|| a[i]=='\0'){
//           if(cur>max){
//              max=cur;
//           }
//           cur=0;
//       }
//       else
//       cur++;
//       if(a[i]=='\0'){
//           break;
//       } 
//       
//       i++;
//       
//   }
//   cout<<max<<endl;
//   return 0;
//