//Apna College
       //OPERATOR OVERLOADING 

#include<iostream>
using namespace std;

class complex
{
    private:
      int real,imaginary;

    public:
         complex(int r=0,int i=0)
         {
             real=r;
             imaginary=i;
         }     

     complex operator + (complex const &obj)
     {
         complex res;
         res.imaginary =imaginary +obj.imaginary;
         res.real =real +obj.real;
        return res;
     }    

     void display()
     {
         cout<<real<<" + i"<<imaginary<<endl;
     }
};

int main(){
    complex c1(12,7);
    complex c2(6,7);
    complex c3=c1 + c2 ;
    c3.display();

    return 0;
}
