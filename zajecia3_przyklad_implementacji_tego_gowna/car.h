#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
    private:
    std::string brand;
    int speed;

public:
    Car(std::string brand, int speed);

    //deklarujemy metody
    void accelerate(int amount);
    void brake(int amount);
    void showInfo() const;
};


#endif

