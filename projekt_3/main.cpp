#include <iostream>
#include "koszyk.h"
#include "produkt.h"

int main()
{
    Koszyk koszyk1;
    int N;
    std::string nazwa;
    double netto, waga;
    int vat;
    std::cout << "N=";
    std::cin >> N;
    if(N > 0 && N <= 10)
    {
    for(int i  = 1; i <= N; i++)
    {
        std::cout <<"Nazwa=";
        std::cin >> nazwa;
        std::cout << "Cena[PLN]=";
        std::cin >> netto;
        std::cout << "Waga[g]=";
        std::cin >> waga;
        std::cout << "VAT[%]=";
        std::cin >> vat;
        Produkt p(nazwa, netto, waga, vat);
        koszyk1.dodaj_do_koszyka(p);
    }
    koszyk1.wyswietl_koszyk();
    std::cout << "Waga koszyka[g]=" << koszyk1.waga_calkowita();
    }
    else
    {
        std::cout << "Bledne dane wejsciowe";
    }



}