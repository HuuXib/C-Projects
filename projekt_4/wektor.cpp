#include "wektor.h"

Wektor::Wektor(int rozmiar_init) : rozmiar(rozmiar_init)
{
    if (rozmiar_init < 1 || rozmiar_init > MAX_ROZMIAR)
    {
        rozmiar = 0; 
        return;
    }
    tablica = new double[rozmiar];

    for (int i = 0; i < rozmiar; i++)
    {
        tablica[i] = 0;
    }
}
void Wektor::wpisz(int indeks, double wartosc)
{
    tablica[indeks] = wartosc;
}
Wektor::Wektor(const Wektor& other)
{
    std::cout << "Konstruktor kopiujacy\n";
    rozmiar = other.rozmiar;
    tablica = new double[rozmiar];

    for (int i = 0; i < rozmiar; i++)
    {
        tablica[i] = other.tablica[i];
    }
}

double Wektor::podaj(int indeks)
{   
    if (indeks < 0 || indeks >= rozmiar)  
    {
        return tablica[0];  
    }
    return tablica[indeks];
}

int Wektor::rozmiar_wektora()
{
    return rozmiar;
}

void Wektor::dodaj(const Wektor& w)
{
    int mniejszy = (rozmiar < w.rozmiar) ? rozmiar : w.rozmiar;
    for(int i = 0; i < mniejszy; i++)
    {
        tablica[i] += w.tablica[i];
    }
}


//Operator
Wektor& Wektor:: operator+=(const Wektor& other)
{
    int mniejszy = (rozmiar < other.rozmiar) ? rozmiar : other.rozmiar;
    for(int i = 0; i < mniejszy; i++)
    {
        tablica[i] += other.tablica[i];
    }
    return *this;

}
Wektor& Wektor:: operator-=(const Wektor& other)
{
    int mniejszy = (rozmiar < other.rozmiar) ? rozmiar : other.rozmiar;
    for(int i = 0; i < mniejszy; i++)
    {
        tablica[i] -= other.tablica[i];
    }
    return *this;

}
Wektor& Wektor:: operator=(const Wektor& other)
{
    if (this == &other) return *this;
    delete[] tablica;
    rozmiar = other.rozmiar;
    tablica = new double[rozmiar];

    for(int i = 0; i < rozmiar; i++)
    {
        tablica[i] = other.tablica[i];
    }
    return *this;
}

double& Wektor::operator[](int indeks)
{
    if(indeks < 0 || indeks >= rozmiar)
    {
        return tablica[0];
    }
    return tablica[indeks];
}

Wektor operator+(const Wektor& a, const Wektor& b)
{
    int rozmiar = a.rozmiar;
    Wektor wynik(rozmiar);
    for(int i = 0; i < rozmiar; i++)
    {
        wynik[i] = a.tablica[i] + b.tablica[i];
    }
    return wynik;
}
Wektor operator-(const Wektor& a, const Wektor& b)
{
    int rozmiar = a.rozmiar;
    Wektor wynik(rozmiar);
    for(int i = 0; i < rozmiar; i++)
    {
        wynik[i] = a.tablica[i] - b.tablica[i];
    }
    return wynik;
}

Wektor operator!(const Wektor& other)
{
    int rozmiar = other.rozmiar;
    Wektor wynik(rozmiar);
    for(int i = 0; i < other.rozmiar; i++)
    {
        wynik[i] = other.tablica[i] * (-1);
    }
    return wynik;
}

std::ostream& operator<<(std::ostream& os, const Wektor& w)
{
    os << "[";
    for(int i = 0; i < w.rozmiar; i++)
    {
        os << w.tablica[i];
        if(i != w.rozmiar -1)
        {
            os << " ";
        }
    }
    os << "]";
    return os;
}
