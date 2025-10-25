#include <iostream>
using namespace std;

class Square
{
    double side;
public:
    // Make an constructor
    Square(double a) : side(a) {}
    double area() {return side*side;}
};


class Cuboid {
    Square base;
    double height;
public:
    Cuboid(double a, double h) : height(h),base(a) {}
    double volume() {return base.area()*height;}
};

int main()
{
    Cuboid mycube(10, 20);
    cout << mycube.volume();
    return 0;
}