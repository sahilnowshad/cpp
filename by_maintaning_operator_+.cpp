#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int img;
    complex operator +(complex c){
    complex temp;
    temp.real=real+c.real;
    temp.img=img+c.img;
    return temp;

               }
};
   int main(){
    complex c1,c2,c3;
    c1.real=10, c1.img=5;
    c2.real=6,c2.img=3;
    c3=c1+c2;
     //call dhe ab ye daikhay gha operator +ko
     cout<<c3.real<<endl<<c3.img;
   }