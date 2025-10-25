#pragma once
#include <iostream>


class Samochod
{
private:
    std:: string numer_rejestracyjny;
    int moc;
    double waga;
    char rodzaj;

public:
    Samochod(std::string numer_rejestracyjny, int moc, double waga, char rodzaj);
    Samochod();
    std::string uzyskaj_dostep_numer_rejestracyjny();
    int uzyskaj_dostep_moc();
    double uzyskaj_dostep_waga();
    char uzyskaj_dostep_rodzaj();

};