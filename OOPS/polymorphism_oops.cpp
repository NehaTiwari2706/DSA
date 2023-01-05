// FREE CODE CAMP
#include<iostream>
using namespace std;

class Employee{
       private: 
        string Company;
        int Age;
       protected:
        string Name;
          
        public:  
         
                Employee(string name,string company,int age){
                  Name= name;
                  Company= company;
                  Age= age;
              }
         void setName(string s){
              Name=s;
          }
          string getName(){
             return Name;
          }
         
         void AskforPromotion(){
           if(Age>30){
             cout<< Name <<" got promoted! "<<endl;
           }
           else{
             cout<< Name <<" ,sorry NO promotion for you!"<<endl;
           }
         }
         virtual void work(){
             cout<<Name<< " is checking mail,task backlog ,performing tasks..."<<endl;
         }
};   

class Developer :public Employee{
     public:
     string Favoriteprogramminglanguage;
         
         Developer(string name,string company,int age,string favoriteprogramminglanguage)
         :Employee( name, company, age)
         {
                   Favoriteprogramminglanguage = favoriteprogramminglanguage;
         }
         void fixBug(){
             cout << Name <<" fixed bug using "<<Favoriteprogramminglanguage<<endl;
         }
          void work(){
             cout<<Name<< " is writing "<<Favoriteprogramminglanguage<< " code "<<endl;
         }
};

class Teacher :public Employee{
  public:
        string Subject;
        void preparelesson(){
          cout<< Name <<" is preparing for "<<Subject<<" lesson"<<endl; 
        }
        Teacher(string name,string company,int age,string subject)
        :Employee( name,company,age)
        {
                Subject=subject;
        }
        void work(){
             cout<<Name<< " is teaching "<< Subject<<endl;
         }
};

int main(){                    //The most common use of polymorphism is when a parent class reference is used to refer to a child class object
    Developer d=Developer("Neha","YT",19,"C++");               
    Teacher t= Teacher("John","DIS",32,"SST");
    //  d.work();
    //  t.work();

    Employee *e1= &d;
    Employee *e2= &t;

    e1 -> work();
    e2 -> work();

    return 0;
}
