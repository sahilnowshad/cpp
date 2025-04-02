#include<iostream>
#include<math.h>
 using namespace std;
  int main(){
    double real1,imag1,real1,real2,imag2;
    // input real and imaginary part for the first complex number
    cout<<"enter the real and imaginary part of the first complex number";
    cin>>real1>>imag1;
   // input the real and imaginary part for the second complex number
     cout<<"enter the real and imaginary part of the second complex number";
     cin>>real2>>imag2;  
     // calculate the magnitude of the ist complex number
      double mag1=sqrt(real1*real1+imag1*imag1);
      double mag2=sqrt(real2*real2+imag2*imag2);
      // compair the magnitude and print the result
      if(mag1>mag2){
        cout<<"the first comlex number has higher magnitude"<<endl;
      }
         else if(mag1<mag2){
            cout<<"the second complex number has higher magnitue"<<endl;
         }
         else{
            cout<<"they have equal magnitude";
         }
  }
   