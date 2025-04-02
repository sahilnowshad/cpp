#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    string name;
    int math_marks;
    int phy_marks;
    int che_marks;
    public:
 student(int r,string n,int m,int p,int c){ // here we have used parametrised constructor
        rollno=r;
        name=n;
        math_marks=m;
        phy_marks=p;
        che_marks=c;
    }
    int total_marks(){
   return math_marks+phy_marks+che_marks;
    }
    char grade(){
        float avg=total_marks()/3;
        if(avg>60)
        cout<<"you have got a grade A";
        else if(avg<60&&avg>40)
        cout<<"you have got a grade B ";
        else
        cout<<"you got a grade C";
    }
};
int main(){
    int rollno;
    string name;
    int m,p,c;
    cout<<"enter roll no of student";
    cin>>rollno;
    cout<<"enter the name of a student ";
    cin>>name;
    cout<<"enter the marks in 3 subjects ";
    cin>>m>>p>>c;
  student s(rollno,name,m,p,c);// yaha hamnay obj banaya and paramertised constructor b create kra   
  cout<<"total marks of student"<<s.total_marks()<<endl;
  cout<<"grade of student"<<s.grade()<<endl;
  cout<<"name of a student"<<name;
  cout<<"marks in maths"<<" "<<m<<endl<<"marks in phy"<<" "<<p<<"marks in che"<<" "<<c<<endl;

  
}




