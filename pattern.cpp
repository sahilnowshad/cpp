#include<iostream>
  using namespace std;
     int main(){
        int i,j,n,k;
          cout<<"enter the no. of time you want to print the pattern enter n";
   cin>>n;
      for(i=1;i<=n;i++){
         for(j=1;j<=i;j++){
            cout<<"n";
         }
           for(k=1;k<=i;k++){
            cout<<" ";
           }
          cout<<"\n";
      }
     }
     