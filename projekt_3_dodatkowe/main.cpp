#include <iostream>
#include "katalog.h"





int main() 
{
    Katalog katalog1;
    std:: string numer_rejestracyjny;
    int moc;
    double waga;
    char rodzaj;


    int N;
    std::cout << "N=";
    std::cin >> N;
    if(N > 0 && N < 10)
    {
        for(int i =0; i < N; i++)
        {
            std::cin >> numer_rejestracyjny >> moc >> waga >> rodzaj;
            Samochod p(numer_rejestracyjny, moc, waga, rodzaj);
            katalog1.dodaj_samochod(p);
        }
        std::cout << "I=";
    katalog1.usun_samochod();
    katalog1.wyswietl_numery_rejestracyjne_moce_silnikow();
    }
    else
    {
        std::cout << "Bledne dane wejsciowe";
        return 0;
    }
    return 0;
}