#include<iostream>
  using namespace std;
    int main(){
        int tax,income;
          cout<<"enter your income";
            cin>>income;
              if(income<=250000){
                  cout<<"no tax";
              }
                else{
                      
                      if(income>=250000&&income<500000){
                        tax=income/100*5;
                      cout<<"5% tax "<<tax<<endl;}
                      else{
                        if(income>500000&&income<1000000){
                              tax=income/100*20;
                            cout<<"20% tax"<<tax<<endl;
                        }
                        else{
                            
                                tax=income/100*30;
                                  cout<<"30% tax"<<tax<<endl;
                            }
                        
                      }
                }
                  
                

                  

    }