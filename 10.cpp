#include <iostream>
#include <cmath>
using namespace std;

class Shape{
public:
    virtual double area()=0;
};

class Circle : public Shape{
private:
    double radius;
public:
    Circle(double r):radius(r){}
    double area(){
        return 3.14*radius*radius;
    }
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s):side(s){}
    double area(){
        return side*side;
    }
};

int main(){
    Shape * shape;

    Circle c1(3);
    Square s1(4);

    shape=&c1;
    cout<<"Area of Circle: "<<shape->area()<<endl;

    shape = &s1;
    cout<<"Area of Square: "<<shape->area()<<endl;

    return 0;

}
