#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
      int breadth;
      public:
      void setlength(int l){
        if(l>=0){
          length=l;
        }
          else
          length=0;

      }
       void setbreadth(int b){
        if(breadth>=0)

        breadth=b;
         else
         breadth=0;
       }
         int getlength(){
            
          return length;
          

         }
           int getbreadth(){
          return breadth;
           }
          int area(){
            return length*breadth;
          }
        
           

};
 int main(){
    rectangle r;// ham nay obj banaya aik 
    r.setlength(10);// fun ko call kra and value pass kre 
    r.setbreadth(5);
    cout<<"length is :"<<r.getlength()<<endl;
    cout<<r.area();
 }