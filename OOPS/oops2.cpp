//AREA AND PERIMETER OF A CIRCLE USING CLASS AND OBJECT 
#include<iostream>
using namespace std;

class Test{

     public:
         float r,area,perimeter;

     void input(){
         cout<<" Enter radius of a circle :";
         cin>>r;
     }    

     void findArea(){
         area=3.14*r*r;
     }

     void findPerimeter(){
         perimeter=2*3.14*r;
     }

     void display(){
         cout<<"Area of circle is :"<<area<<endl;
         cout<<"Perimeter of circle is :"<<perimeter;
     }
};

int main(){

    Test obj;
    obj.input();
    obj.findArea();
    obj.findPerimeter();
    obj.display();

    return 0;
}
