#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double startsum, opr, daily;
    int liczba_dni;

    cout << "podaj swój początkowy kapitał: ";
    cin >> startsum;
    cout << "Podaj kwote dziennych oszczednosci: ";
    cin >> daily;
    cout << "teraz podaj ile chcesz dni oszczędzać: ";
    cin >> liczba_dni;
    cout <<"podaj oprocentowanie: ";
    cin >> opr;
    opr = opr/100;
    for (int dzien = 1; dzien <= liczba_dni; dzien++){
        startsum += daily;
        startsum += startsum * opr;
        cout <<  "Dzień " << dzien <<" "<< fixed << setprecision(2) << startsum << "PLN" << endl;
    }
    cout << "Po " << liczba_dni << "dniach  zgromadziłeś " << fixed <<  setprecision(2) << startsum << "PLN" << endl;
    return 0;
}