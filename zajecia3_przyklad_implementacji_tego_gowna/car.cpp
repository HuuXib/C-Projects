#include <iostream>
#include "car.h"

Car::Car(std::string brand, int speed) : brand(brand), speed(speed) {}


void Car::accelerate(int amount)
{
    speed += amount;
}

void Car::brake(int amount) {
    speed -= amount;
    if(speed < 0) speed = 0;
}


void Car::showInfo() const {
    std::cout << "Brand " << brand << ", Speed " << speed << " km/h" << std::endl;
}