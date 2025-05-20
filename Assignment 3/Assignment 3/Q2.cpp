#include<iostream>
using namespace std;

class Shape{

public:
void printShape(){
    cout<<"This is a shape. "<<endl;
}

};

class Polygon:public Shape{
    public:
    void printShape(){
    cout<<"Polygon is a shape. "<<endl;
}
};

class Rectangle:public Polygon{
public:

void printShape(){
    cout<<"Rectangle is a polygon. "<<endl;
}
};

class Triangle:public Polygon{
public:

void printShape(){
    cout<<"Triangle is a polygon. "<<endl;
}
};

class Square:public Rectangle{
 public:
 void printShape(){
    cout<<"Square is a rectangle. "<<endl;
 }
};




int main(){
    Square s;
    s.printShape();
    Triangle t;
    t.printShape();
    Rectangle r;
    r.printShape();
    Polygon p;
    p.printShape();
    Shape sh;
    sh.printShape();


    return 0;
}