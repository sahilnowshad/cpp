#include<iostream>
using namespace std;
class complex{

    private:
    int real;
    int imag;
    public:
    complex(int r,int i){//here we have taken a non parametrised constructor 
        real=r;
    imag=i;
          }
     void display(){
        cout<<real<<"i"<<imag;

     } 
 
      friend complex operator+(complex c1,complex c2);
    };
    // now here we elobrate this friend fn
    complex operator+(complex c1,complex c2){
        complex temp;
        temp.real=c1.real+c2.real;
        temp.imag=c1.imag+c2.imag;
          return temp;

    };
       int main(){
        complex c1(5,3), c2(10,5),c3;
        c3=c1+c2; // opearator + will be called which will take c1 and c2 as parimeters 
        c3.display(); /*so that we can see the results on screen i have written a 
        display fn bcz i cant acess the private members inside the main fn*/ 

       }
      

