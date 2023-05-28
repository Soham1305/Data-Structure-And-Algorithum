#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	// code by soham_piprotar
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int ans=0;
        int count=1;
        if(y<=z){
           cout<<ans+((x*y)/z)<<endl;
           
        }else if(y>z){
             
            while(y>z){
                count++;
                y= y-z;
            }
            ans=(count*x);
            cout<<ans<<endl;
        
        }
       
    }
	return 0;
}
