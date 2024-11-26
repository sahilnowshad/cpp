#include<iostream>
   using namespace std;
   int main(){
    int age;
      cout<<"enter your age";
          cin>>age;
            /* using conditional statements for determining age catagorie */
              if(age>=18){
                cout<<"an adult"<<endl;

              }
          else if(age>12&&age<18){
             cout<<"you are a teenager ";

          }
          else{
                  cout<<"you are non adult";
          }
   }