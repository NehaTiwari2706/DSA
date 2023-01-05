//Inheritance : MultiLevel Inheritance
#include<iostream>
using namespace std;

class A{
    public:
     void Afunc(){
           cout<<"Inherited"<<endl;
       }
};

class B:public A{
    public:
     void Bfunc(){
           cout<<"Bfunction"<<endl;
       }
};

class C: public B{
    public:
};

int main(){
    
    C c;
    c.Afunc();
    c.Bfunc();
    return 0;
}
