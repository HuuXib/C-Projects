#include "produkt.h"
#include <iostream>

Produkt::Produkt(std:: string nazwa_produktu, double netto_produktu, double waga_produktu, double vat)
:nazwa_produktu(nazwa_produktu), netto_produktu(netto_produktu), waga_produktu(waga_produktu), vat(vat) {}

void Produkt::produkt_info()
{
    std:: cout << nazwa_produktu << ", " << "cena brutto=" << netto_produktu + netto_produktu * (vat/100) << "PLN" << ", " << "waga=" << waga_produktu << "g" << std::endl;
}
double Produkt::zwroc_wage()
{
    return waga_produktu;
}
