//Rate in Maze
//#include <bits/stdc++.h>
//using namespace std;
//bool issafe(int** a,int x,int y,int n){
//    if(x<n&&y<n&&a[x][y]==1){
//    return true;
//    }
//    return false;
//}
//bool ratinmaze(int** a,int x,int y,int n,int** sol){
//    if(x==n-1&&y==n-1){
//        sol[x][y]=1;
//        return true;
//    }
//    if(issafe(a,x,y,n)){
//        sol[x][y]=1;
//        if(ratinmaze(a,x+1,y,n,sol)){
//            return true;
//        }if(ratinmaze(a,x,y+1,n,sol)){
//            return true;
//        }
//        sol[x][y]=0;  //backtraking 
//        return false;
//    }
//    return false;
//}
//int main(){
//   int n;
//   cin>>n;
//   int** a=new int*[n];
//   for(int i=0;i<n;i++){
//    a[i]=new int[n];
//   }
//   for(int i=0;i<n;i++){
//    for(int j=0;j<n;j++){
//        cin>>a[i][j];
//    }
//   }
//   
//   int** sol=new int*[n];
//   for(int i=0;i<n;i++){
//    sol[i]=new int[n];
//    for(int j=0;j<n;j++){
//        sol[i][j]=0;
//    }
//   }
//   if(ratinmaze(a,0,0,n,sol)){
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            cout<<sol[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//   }
//   return 0;
//}
#include <bits/stdc++.h>
using namespace std;
bool issafe(int** a,int x,int y,int n){
    if(x<n &&y<n&&a[x][y]==1){
        return true;
    }
    return false;
}
bool ratinmaze(int** a,int x,int y,int n,int** sum){
    if(x==n-1&&y==n-1){
        sum[x][y]=1;
        return true;
    }
    if(issafe(a,x,y,n)){
        sum[x][y]=1;
        if(ratinmaze(a,x+1,y,n,sum)){
            return true;
        }
        if(ratinmaze(a,x,y+1,n,sum)){
            return true;
        }
        sum[x][y]=0;
        return false;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int** a=new int*[n];
    for(int i=0;i<n;i++){
        a[i]=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int** sol=new int*[n];
    for(int i=0;i<n;i++){
      sol[i]=new int[n];
      for(int j=0;j<n;j++){
        sol[i][j]=0;
      }
    }
    if(ratinmaze(a,0,0,n,sol)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}