#include<iostream>
using namespace std;
  class rectangle{
    public:
    float length;
     float breadth;
       public:
     float area(){
        return length*breadth;

     }  
  float perimeter(){
   return 2*(length+breadth);
  }   
  };  // this terminator operator shows the end of the class 
    int main (){
        rectangle r1,r3;
        
          r1.breadth=10;
          r1.length=50;
          cout<<"area of rectangle r1"<<" "<<r1.area()<<endl;
    }