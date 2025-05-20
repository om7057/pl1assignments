#include<iostream>
#include<math.h>
using namespace std;

class Polar{
    double radius,angle;
    public:
    Polar(int r,float a){
         radius=r;
         angle=a;
    }
    double getRadius(){
        return radius;
    }
        double getAngle(){
        return angle;
    }
    void setRadius(double r){
        radius=r;
    }
    void setAngle(double a){
        angle=a;
    }
    void display(){
        cout<<"Result\n";
        cout<<"Polar: ("<<radius<<","<<angle<<")"<<endl;
    }
    Polar operator+(Polar &obj){
        double x1=radius*cos(angle);
        double y1=radius*sin(angle);

        double x2=obj.radius*cos(obj.angle);
        double y2=obj.radius*sin(obj.angle);
    
    double X=x1+x2;
    double Y=y1+y2; 


    double radiusSum = sqrt(X * X + Y * Y);
    double angleSum = atan2(Y, X);

        return Polar(radiusSum, angleSum);
    
    }


    
}; 


int main(){
    double d1,d2;
    cout<<"Enter 1st Polar coordinates: "<<endl;
    cin>>d1>>d2;
    Polar p1(d1,d2);
    double b1,b2;
    cout<<"Enter 2nd Polar coordinates: "<<endl;
    cin>>d1>>d2;
    Polar p2(d1,d2);
    Polar p3=p1+p2;
    p3.display();



    return 0;
}

