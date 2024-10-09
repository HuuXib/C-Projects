#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    char operacja;

    cout <<"Witam w programie 'Kalkulator prosty' , w którym mozesz wykonywac proste operacje arytmetyczne\n";

    cout << "Podaj pierwszą liczbę: ";
    cin >> a;

    cout <<"Podaj druga liczbe: ";
    cin >> b;

    cout <<"wybierz operacje do wykonania (+, -, *, :): ";
    cin >> operacja;

    switch (operacja) {
        case '+':
        cout <<"suma tych liczb to: " <<a + b << endl;
        break;
        case '-':
        cout <<"różnica tych liczb wynosi: " << a - b << endl;
        break;
        case '*':
        cout <<"iloczyn tych liczb wynosi: " << a * b << endl;
        break;
        case ':':
        if (b != 0){
        cout <<"iloraz tych liczb wynosi: " << a / b << endl;
        break;
        }
        else {
            cout <<"Yebnij sie w cymbał ze dzielisz przez 0";
        }
    default:
    cout <<"Błąd, niepoprawna operacja." <<endl;
    break;
    }


    return 0;
}