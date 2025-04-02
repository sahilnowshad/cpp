#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breadth;
    public:
    rectangle();
    rectangle(int l,int b);
    rectangle(rectangle &r1);
   int getlength();
    int getbreadth();
  void   setlength(int l);
   void setbreadth(int b);
   int area();
   int parimeter();
   bool is_square();

};
 rectangle::rectangle(){ /* parametarised constructor */
    length=1;
    breadth=1;
 }
 rectangle::rectangle(int l,int b){
    setlength(l);
    setbreadth(b);
 }
 rectangle::rectangle(rectangle &r){
    length=r.length;
    breadth=r.breadth;

 }
 void rectangle::setbreadth(int b){
    if(b<0)
    cout<<"invailed breadth";
    else
    breadth=b;
 }
 void rectangle::setlength(int l){
    if(l<0)
    cout<<"invailed length";
    else 
    length=l;
 }
 int rectangle::getlength(){
    return length;
 }
 int rectangle::getbreadth(){
    return breadth;
 }
 int rectangle::area(){
    return length*breadth;
 }
 int rectangle::parimeter(){
    return 2*(length+breadth);
 }
 bool rectangle::is_square(){
    return length==breadth;
 }
 int main(){
    rectangle r1(10,16);
    cout<<"area is "<<" "<<r1.area()<<"parimeter is "<<r1.parimeter()<<"length is "<<r1.getlength()<<"breadth is "<<r1.getbreadth()<<endl;
   if(r1.is_square())
   cout<<"yes it is square"<<endl;
   else 
   cout<<"not a square ";
 }
