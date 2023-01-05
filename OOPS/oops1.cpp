//Apni Kaksha
#include<iostream>
using namespace std;

class Student{
    string Name;

    public:
    //string Name;
    int Age;
    bool Gender;
      
      void setName(string s){
           Name=s;
      }

      void getName(){
          cout<<Name<<endl;
      }
      
      ~Student(){
          cout<<"Destructor called"<< endl;
      }

      Student(){
          cout<<"Default constructor"<<endl;    //Default constructor
      }

      Student(string s,int age,bool gender){
          Name=s;                                //Parameterised constructor
          Age=age;
          Gender=gender;
          cout<<"Parameterised constructor"<<endl;  

      }

      Student(Student &a){
          Name=a.Name;
          Age= a.Age;
          Gender= a.Gender;                       //Copy constructor
          cout<<"Copy constructor"<<endl;  

      }

       void printinfo(){
            cout<<"Name ="<<Name<<endl;
            cout<<"Age ="<<Age<<endl;
            cout<<"Gender ="<<Gender<<endl;  
    }

    bool operator == (Student &a){
             if(Name==a.Name && Age==a.Age && Gender==a.Gender){
                 return true;
             }                                      //operator overloading 
             else{
                 return false;
             }
    }
};

int main(){

    // Student arr[3];
    // for(int i=0;i<3;i++){
    //     string s;
    //     cout<<"Name =";
    //   cin>>s;
    //   arr[i].setName(s);
    //     cout<<"Age =";
    //   cin>>arr[i].Age;
    //     cout<<"Gender =";
    //   cin>>arr[i].Gender;
    // }

    // for(int i=0;i<3;i++){
    //     arr[i].printinfo();
    // }
    
    
    Student a("NEHA",19,0);
    //a.printinfo();
    Student b("Naina",23,0);
    Student c=a;
    //c.printinfo();
    
    if(b==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }

    return 0;
}
