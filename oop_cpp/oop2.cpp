#include <iostream>

using namespace std;

class Circle 
{
    double radius;
public:
    Circle(double r) : radius(r) { }
    double area() {return 3.14159265*radius*radius;}
};

class Cylinder 
{
    double height; Circle base; // obiekt klasy circle
public:
    Cylinder(double h, double r) : height(h), base(r) {}
    double volume() {return height* base.area();}

};


int main()
{
    Cylinder column(10,20);
    cout << column.volume();
    return 0;
}