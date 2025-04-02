#include<iostream>
 using namespace std;
 class rectangle{
    public:
    int length;
     int breadth;
     float area(){
        return length*breadth;
     }
      float parimeter(){
        return 2*(length+breadth);
      }


 };
 int main(){
    /*rectangle *ptr;
    ptr=new rectangle;
    ptr->length=10;
    ptr->breadth=5;
    cout<<"area of rectangle is "<<" "<<ptr->area()<<endl;*/
                                       // or by another way of doing that 
    rectangle *q=new rectangle;
    q->length=10;
    q->breadth=3;
       cout<<"area of rectangle"<<" "<<q->area();

 }