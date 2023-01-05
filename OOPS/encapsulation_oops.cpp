//Encapsulation -- Wrapping data and functions into single unit (or) the restricting of DIRECT access to some of an objects components.
#include<iostream>
using namespace std;

class Employee{
    private:
        string Name;
        string Company;
        int Age;
    public:
        void setName(string s){
            Name=s;              //Setter
        }
        string getName(){
            return Name;         //Getter
        }
        void setCompany(string company){
            Company=company;              //Setter
        }
         string getCompany(){
            return Company;         //Getter
        }
         void setAge(int age){
             if(age>=18)
               Age=age;              //Setter
        }
         int getAge(){
            return Age;         //Getter
        }
};

int main(){
    
    Employee A;
    A.setName("Neha");
    A.setAge(19);
    cout<<A.getName()<< " is "<<A.getAge()<< " years old";
    return 0;
}