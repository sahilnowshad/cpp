#include<iostream>
  using namespace std;
     int main(){
        int year;
        cout<<"enter the year";
        cin>>year;
            if(year%4==0&&year%100!=0||year%400==0){
                cout<<"entered year is a leap";
            }else{
                cout<<"entered year is not a leap year ";
            }
     }