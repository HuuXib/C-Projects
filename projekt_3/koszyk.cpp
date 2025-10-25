#include "koszyk.h"
#include <iostream>

//szybki konstruktor
Koszyk:: ~Koszyk() {}
Koszyk::Koszyk(): rozmiar(0) {}

void Koszyk::wyswietl_koszyk() 
{
    for(int i = 0; i < rozmiar; i++) 
    {
        Produkty[i].produkt_info();
    }
}

void Koszyk::dodaj_do_koszyka(const Produkt &p)
{
    if (rozmiar >= 10)
    {
        return;
    }
    Produkty[rozmiar] = p;
    rozmiar++;

}

double Koszyk::waga_calkowita()
{
    double waga_calkowita;
    for(int i=0; i < rozmiar; i++)
    {
        waga_calkowita += Produkty[i].zwroc_wage();
    }
    return waga_calkowita;
}