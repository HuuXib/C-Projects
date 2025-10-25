#pragma once
#include <string>
class Produkt
{
    std::string nazwa_produktu;
    double netto_produktu, waga_produktu;
    double vat;
public:
    Produkt(std:: string nazwa_produktu, double netto_produktu, double waga_produktu, double vat);
    Produkt() {}
    ~Produkt() {}
    void produkt_info();
    double zwroc_wage();
};