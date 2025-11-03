#pragma once
#include <iostream>

class Wektor
{
private:
    static const int MAX_ROZMIAR = 100;
    int rozmiar;
    double *tablica;

public:
    // Konstruktor
    Wektor(int rozmiar_init);

    // Konstruktor kopiujący
    Wektor(const Wektor& other);

    //Metody
    double podaj(int indeks);
    int rozmiar_wektora();
    void dodaj(const Wektor& w);
    void wpisz(int indeks, double wartosc);

    //Operatory
    Wektor& operator+=(const Wektor& other);
    Wektor& operator-=(const Wektor& other);
    Wektor& operator=(const Wektor& other); 

    double& operator[](int indeks);
    friend Wektor operator+(const Wektor& a, const Wektor& b);
    friend Wektor operator-(const Wektor& a, const Wektor& b);
    friend Wektor operator!(const Wektor& w);
    friend std::ostream& operator<<(std::ostream& os, const Wektor& w);
};
