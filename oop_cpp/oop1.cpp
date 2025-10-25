#include <iostream>
#include <string>

using namespace std;

class Dog 
{
    public:
        string name;
        int age;

        void bark() {
            cout << name << " says woof!" << endl;
        }

};

int main()
{
    Dog myDog;
    myDog.name = "Buddy";
    myDog.age = 3;
    myDog.bark();
    return 0;
}
