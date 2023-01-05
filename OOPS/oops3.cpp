#include<iostream>
using namespace std;

class Box{
     
     public:
         double lenght;
         double breadth;
         double height;
         
    public:
         double getVolume(){
             return lenght*breadth*height;
         }

        void setlenght(double len){
              lenght=len;
         }

         void setbreadth(double bre){
             breadth=bre;
         }

         void setheight(double hei){
             height=hei;
         }
};
int main(){
    
    Box box1;
    Box box2;
    double volume=0.0;

    box1.setlenght(6.0);
    box1.setbreadth(7.0);
    box1.setheight(5.0);

    box2.setlenght(12.0);
    box2.setbreadth(13.0);
    box2.setheight(10.0);

    volume=box1.getVolume();
    cout<<"Volume of box1 :"<<volume<<endl;

    volume=box2.getVolume();
    cout<<"Volume of box2 :"<<volume<<endl;

    return 0;
}