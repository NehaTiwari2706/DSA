// C++ program to illustrate PARAMETERISED CONSTRUCTOR
#include<iostream>
using namespace std;

class Student{

    public:
        string Name;
        int Age;
     
        Student(string s,int age){
          Name=s;                                //Parameterised constructor
          Age=age;
          cout<<"Parameterised constructor"<<endl;  
      }

        void setName(string s){
              Name=s;
         }

         void setAge(double age){
              Age=age;
         }

      display(){
          cout<<" Name of the student :"<<Name<<endl;
          cout<<"  Age of student :"<<Age<<endl;
      }
};

int main(){
    
    Student obj("Neha" ,19);
    obj.display();

    return 0;
}