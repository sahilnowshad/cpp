#include<iostream>
 using namespace std;
  class rectangle{
    private:
    int length;
    int breadth;
    public:
    void setlength(int l){
        if(l<0){
            cout<<"invailed length entered ";

        }
         else{
            length=l;
         }
    }
    void setbreadth(int b){
        if(b<0){
            cout<<"invailed breadth entered ";
        }
        else{
            breadth=b;
        }
    }
     int getlength(){
        return length;
     }
     int getbreadth(){
        return breadth;
     }
     rectangle(){ // parametrised constructor 
     length =0;
     breadth =0;
     }
      rectangle(int l,int b){
        setlength(l);
        setbreadth(b);
      }
      rectangle(rectangle &rect){
        length=rect.length;
        breadth=rect.breadth;
      }

  };
    int main(){
        rectangle r1;
        r1.setlength(12);
        r1.setbreadth(10);
       cout<< r1.getlength()<<endl;
        cout<<r1.getbreadth();

    }