#include <iostream>
#include <cmath>

using namespace std;


    int silnia(int n) {
    if (n == 0 || n==1){
        return 1;
    }
        return n * silnia(n -1);
        }
int main()
{
    char typ;
    char wtyp;
    cout << "Jaki typ zadania mam policzyć?"<<endl<<"Permutacja = p,"<<endl<<"Wariacja = w "<<endl<<"Typ: ";
    cin >> typ;
    int n,k;
    double res1, res2;
    if(typ == 'w'){
    cout <<"Wybrałeś wariacje" <<endl;
    cout <<"Czy chcesz obliczyc wariacje z powtórzeniami czy bez powtórzeń? " <<endl<<"z powtórzeniami - p"<<endl<<"bez powtórzeń = b "<<endl<<"Typ wariacji: ";
    cin >> wtyp;
    if(wtyp == 'p'){
        cout << "Wybrałeś wariacje z powtórzeniami"<<endl;
        cout <<"Podaj liczbe zbioru n:";
        cin >> n;
        cout <<"Podaj liczbe elementów k zbioru n : "; 
        cin >>k;
        res1 = pow(k,n);
        cout <<"Liczba wariacji bez powtórzeń tego zbioru wyniesie: "<<res1<<endl;
    }
    else if (wtyp == 'b'){
    cout <<"Podaj liczbe zbioru n:";
    cin >> n;
    cout <<"Podaj liczbe elementów k zbioru n : ";
    cin >> k;
    res1 = silnia(n)/silnia(n-k);
    cout << "Liczba wariacji(bez powtórzeń) tego zbioru wynosi: "<<res1<< endl;  }   }    
    else if (typ == 'p')
    {
        cout <<"Wybraleś permutacje" <<endl;
        cout <<"podaj wartość n: ";
        cin >>n;
        res2 = silnia(n);
        cout <<"Liczba permutacji zbioru n wynosi: "<<res2<<endl;
    }
    
    return 0;
}
