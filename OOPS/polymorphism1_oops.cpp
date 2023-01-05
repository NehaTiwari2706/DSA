//Apna College
     //FUNCTION OVERLOADING

#include<iostream>
using namespace std;

class apnacollege{
    public:
    void func(){
    cout<<"I am a function with no arguments"<<endl;
    }
    void func(int x){
    cout<<"I am a function with int arguments"<<endl;
    }
    void func(double x){
    cout<<"I am a function with double arguments"<<endl;
    }

};

int main(){
    apnacollege object;
    object.func();
    object.func(4);
    object.func(3.141);

    return 0;
}
