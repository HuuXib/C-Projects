#pragma once
#include <iostream>
#include "samochod.h"


class Katalog
{
private:
    int rozmiar = 0;
    Samochod samochody[10];

public:

    void wyswietl_numery_rejestracyjne_moce_silnikow();
    void dodaj_samochod(const Samochod &s);
    void usun_samochod();
    Katalog();
    ~Katalog();
};