/* hamy data ko private rakhnay k leya private members bananay paday ghay we have 
too make data private so that anyone cant acess them*/
#include<iostream>
using namespace std; 
class rectangle{
    private:
    int length;
    int breadth;
    public:
    void setlength(int l){  // they are used for writting purpose called mutator
        if(l>=0)
        length=l;
        else
        cout<<"invailed length";
        
    }
    void setbreadth(int b){
        if(b>=0)
        breadth=b;
        else
        cout<<"invailed breadth";
    }
    int getlength(){ // they are used for read only purpose  called accessor
        return length; /*it returns the public length of rectangle which is set with
        the help of a function*/ 
    }
    int getbreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
    int parimeter(){
        return 2*(length+breadth);
    }
};
    int main(){
        rectangle r1;
        rectangle *p;
        p=&r1;
        p->setlength(10);
        p->setbreadth(3);
        cout<<p->getlength()<<"\n"<<p->getbreadth();
    }
    