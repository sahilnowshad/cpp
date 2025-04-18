#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream ifs("my.txt");
    string name;
    int roll;
    string branch;
    ifs>>name>>roll>>branch;
    ifs.close();
    cout<<"name"<<name<<endl;
    cout<<"roll"<<roll<<endl;
    cout<<"branch"<<branch<<endl;
}