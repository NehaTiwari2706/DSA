//Free Code Camp
#include<iostream>
using namespace std;

class Employee{
    public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
            cout<<"Name ="<<Name<<endl;
            cout<<"Company ="<<Company<<endl;
            cout<<"Age ="<<Age<<endl;  
    }

              Employee(string name,string company,int age){
                  Name= name;
                  Company= company;               //constructor
                  Age= age;
              }
};
int main(){
    Employee employee1=Employee("Saldina","YT-Code Beauty",20);
    // employee1.Name="Saldina";
    // employee1.Company="YT-Code Beauty";
    // employee1.Age=20;
    employee1.IntroduceYourself();
    
    Employee employee2=Employee("John","Google",23);
    // employee2.Name=" john";
    // employee2.Company=" Amazon";
    // employee2.Age=23;
    employee2.IntroduceYourself();
    
    return 0;
}
