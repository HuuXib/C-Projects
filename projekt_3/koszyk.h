#pragma once
#include "produkt.h"


class Koszyk
{
public:
    void wyswietl_koszyk();
    void dodaj_do_koszyka(const Produkt &p);
    double waga_calkowita();
    Koszyk();
    ~Koszyk();
private:
    Produkt Produkty[10];
    int rozmiar;
};