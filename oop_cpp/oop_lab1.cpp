#include<iostream>
#include <string>

using namespace std;


class Osoba
{
public:
    int age;
    string name;
    Osoba()
    {
        name = "Jan";
        age = 20;
    }
};


class Dog
{
private:
    string name;
    string breed;
public:
    
    Dog() : name("Azor"), breed("Terier") {}

    Dog(string n , string b) : name(n) , breed(b) 
    {
    }
    string getName()
    {
        return name;
    }
    void setName(string n) 
    {
        name = n;
    }
    void setBreed(string b) 
    {
        breed = b;
    }
    string getBreed()
    {
        return breed;
    }
};

class Rectangle
{
private:
    float side_a, side_b;

public:
    Rectangle(float a, float b) : side_a(a) , side_b(b) {}

    float Circumference()
    {
        return 2*(side_a+side_b);
    }
};

int main()
{
    int number;
    cin >> number;
    switch (number)
    {
        case 1: 
        {
            Osoba os1;
            cout << os1.name <<" " << os1.age << endl;
            cout << "Podaj imie i wiek=";
            cin >> os1.name >> os1.age;
            cout << os1.name <<" "<< os1.age;
            break;
        }
        case 2:
        {
            Dog piesio;
            cout << piesio.getName() << " " << piesio.getBreed() << endl;
            Dog piesio2;
            cout << "Imie i rasa=";
            string n,b;
            cin >> n;

            cin.ignore();
            getline(cin , b);


            piesio2.setName(n);
            piesio2.setBreed(b);
            cout << piesio2.getName() << " " << piesio2.getBreed() << endl;
            break;
        }
        case 3:
        {
            float a,b;
            cout << "Boki prostokata=";
            cin >> a >> b;
            Rectangle prostokacik(a,b);
            cout << prostokacik.Circumference();
            break;

        }
        default: {
            cout << "Niepoprawny numer zadania";
        }
    }
}




