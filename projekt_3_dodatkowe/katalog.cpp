#include <iostream>
#include "katalog.h"
#include "samochod.h"

Katalog:: Katalog() {}
Katalog :: ~Katalog() {}
void Katalog :: wyswietl_numery_rejestracyjne_moce_silnikow()
{
    for(int i = 0; i < rozmiar ; i++)
    {
        std::cout << samochody[i].uzyskaj_dostep_numer_rejestracyjny() << " " << samochody[i].uzyskaj_dostep_moc() << "||";
    }
}

void Katalog :: dodaj_samochod(const Samochod &s)
{
    samochody[rozmiar] = s;
    rozmiar++;
}

void Katalog:: usun_samochod()
{
    int index;
    std::cin >> index;
    while(index > rozmiar-1 && index < 0)
    {
    std::cin >> index;
    }
    if(index != rozmiar-1)
    {
        samochody[index] = samochody[rozmiar-1];
    }
    rozmiar--;
}
