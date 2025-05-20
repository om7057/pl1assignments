#include <iostream>


class Shape {
public:
    
    virtual double area() const {
        std::cout << "Calculating the area of a generic shape." << std::endl;
        return 0.0;
    }
};


class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159265359 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }
};

int main() {
    
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);

    
    std::cout << "Area of the circle: " << shape1->area() << std::endl;
    std::cout << "Area of the rectangle: " << shape2->area() << std::endl;

    
    delete shape1;
    delete shape2;

    return 0;
}
