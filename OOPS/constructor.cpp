// C++ program to illustrate DEFAULT CONSTRUCTOR
#include<iostream>
using namespace std;

class Student{

    public:
        string Name;
        int Age;
        
        Student(){
          cout<<"Default constructor"<<endl;     //Default constructor
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
    
    Student obj;

    obj.setName("Neha");
    obj.setAge(19);
    obj.display();

    return 0;
}