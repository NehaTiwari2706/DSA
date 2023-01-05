//Inheritance : Multiple Inheritance
#include<iostream>
using namespace std;

class A{
       public:
       void Afunc(){
           cout<<"Inherited"<<endl;
       }
};

class B{
    public:
     void Bfunc(){
           cout<<"funcB"<<endl;
       }
};

class C: public A,public B {
     public:
       int b;
};

int main(){
    
    C a;
    a.Bfunc();
    a.Afunc();

    return 0;
}
