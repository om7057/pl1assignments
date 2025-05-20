



#include<iostream>
using namespace std;
#define pi 3.14

class Circle{
  float r;
  public:
   void acceptParam();
   float getArea();
   float getCircumference();

};
void Circle::acceptParam(){
    cout<<"Enter the radius of the circle to be operated on: "<<endl;
    cin>>r;
}
float Circle::getArea(){
    float area;
    area =pi*r*r;
    return area;
}
float Circle::getCircumference(){
    float circumference;
    circumference=2*pi*r;
    return circumference;
}

int main(){
    Circle a;
    a.acceptParam();
 float  b= a.getArea();
 float  c= a.getCircumference();
    cout<<"The area of the given circle is: "<<b<<endl;
    cout<<"The Circumference of the given circle is: "<<c<<endl;
    return 0;
}
