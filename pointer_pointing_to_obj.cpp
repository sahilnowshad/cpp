#include<iostream>
  using namespace std;
  class rectangle{
    public:
      float length;
      float breadth;
       float area(){
        return length*breadth;
       }
         float parimeter(){
            return 2*(length+breadth);
         }
    

  };
    int main(){
         rectangle r1;
         rectangle *s;
          s=&r1;
          s->length=10;
          s->breadth=5;
          cout<<"area of rectangle r1"<<" "<<s->area()<<endl;
          cout<<"perimeter of area is "<<" "<<s->parimeter();
    }