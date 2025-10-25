#include <iostream>
#include "samochod.h"


Samochod:: Samochod(std::string numer_rejestracyjny,int moc, double waga, char rodzaj )
:numer_rejestracyjny(numer_rejestracyjny), moc(moc), waga(waga), rodzaj(rodzaj) {}
Samochod:: Samochod() {}
std::string Samochod:: uzyskaj_dostep_numer_rejestracyjny()
{
    return numer_rejestracyjny;
}

int Samochod:: uzyskaj_dostep_moc()
{
    return moc;
}

double Samochod:: uzyskaj_dostep_waga()
{
    return waga;
}
char Samochod:: uzyskaj_dostep_rodzaj()
{
    return rodzaj;
}
