#include "Car.h"

int main ()
{
    //brand, speed
    Car myCar("fiat", 70);
    myCar.showInfo();

    myCar.accelerate(30);
    myCar.brake(100);
    myCar.showInfo();

    return 0;


}