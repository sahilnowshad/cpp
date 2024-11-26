#include<iostream>
  using namespace std;
      int sum(int n1,int n2){
        return n1+n2;
      }
        int difference(int n1,int n2){
            return n1-n2;

        }
          int difference(int n1,int n2){
              return n1-n2;
          }
            int multiplication(int n1,int n2){
                return n1*n2;
            }
              int division(int n1,int n2){
                return n1/n2;
              }
              int main(){
                int n1,n2;
                char ch;
                 cout<<"enter the first number n1";
                 cin>>n1;
                    cout<<"enter the second number n2";
                    cin>>n2;
                    switch(ch){
                        case 1:
                         cout<<"the sum is equal to"<<sum(n1,n2)<<endl;
                         break;
                           case 2:
                             cout<<"the difference of two numbers is"<<difference(n1,n2)<<endl;
                               break;
                               case 3:
                               cout<<"the multiplication if two no is"<<multiplication(n1,n2)<<endl;
                                 break;
                         case 4:
                         cout<<"the division of two no is "<<division(n1,n2)<<endl;  
                         break;      
                    }

              }