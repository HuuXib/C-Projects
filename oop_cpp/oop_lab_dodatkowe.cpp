#include <iostream>

using namespace std;


class Laptop
{
private:
    string marka;
    string model;
    string procesor;
    int ram;
    int pojemnosc;
public:
    Laptop(string marka_init, string model_init, string procesor_init, int ram_init, int pojemnosc_init)
    : marka(marka_init), model(model_init), procesor(procesor_init), ram(ram_init),pojemnosc(pojemnosc_init) {}

    void pokaz_specyfikacje()
    {
        cout <<marka <<" "<< model <<" " << procesor << " " << ram << " " << pojemnosc << endl;
    }
    
    void zmien_ram(int r)
    {
        ram = r;
    }
    void zmien_pojemnosc_dysku(int p)
    {
        pojemnosc = p;
    }
};


class Smartfon
{
private:
    string marka, model, system_operacyjny;
    int pamiec_ram;
    float rozmiar_ekranu;
public:
    Smartfon(string marka_init, string model_init, string system_operacyjny_init, int pamiec_ram_init, float rozmiar_ekranu_init) 
    : marka(marka_init), model(model_init), system_operacyjny(system_operacyjny_init), pamiec_ram(pamiec_ram_init), rozmiar_ekranu(rozmiar_ekranu_init) {}

    void pokaz_dane()
    {
        cout << marka << " " << model << " " << system_operacyjny << " " << pamiec_ram << " " << rozmiar_ekranu ;
    }
    void zmien_system_operacyjny(string nowy)
    {
        system_operacyjny = nowy;     
    }
    void zmien_ram(int nowy)
    {
        pamiec_ram = nowy;
    }
};

class Rower
{
private:
    string marka , model, typ;
    int liczba_biegow;
    float waga;
public:
    Rower(string marka_init, string model_init, string typ_init, int liczba_biegow_init ,int waga_init)
    : marka(marka_init) , model(model_init) , typ(typ_init) , liczba_biegow(liczba_biegow_init) , waga(waga_init) {}
    Rower() 
    {
        marka = "Kross";
        model = "Hexagon";
        typ = "Gorski";
        liczba_biegow = 21;
        waga = 12.5;
    }

    void pokaz_dane()

    {
        cout << marka << " " << model << " " << typ << " " << liczba_biegow << " " << waga;
    }
    void zmien_typ(string nowy)
    {
        typ = nowy;
    }
    void zmien_liczbe_biegow(int nowy)
    {
        liczba_biegow = nowy;
    }
    void zmien_wage(float nowy)
    {
        waga = nowy;
    }

};


int main()
{
    int task_number;
    cin >> task_number;
    switch (task_number)
    {
    case 1:
    {
        string marka , model, procesor;
        int pojemnosc,ram;
        cout << "Podaj specyfikacje laptopa=";
        cin >> marka >> model >> procesor >> pojemnosc >> ram;

        Laptop lapek1(marka,model,procesor,pojemnosc,ram);
        lapek1.pokaz_specyfikacje();
        cout << "RAM=";
        cin >> ram;
        lapek1.zmien_ram(ram);
        cout << "Dysk=";
        cin >> pojemnosc;
        lapek1.zmien_pojemnosc_dysku(pojemnosc);
        lapek1.pokaz_specyfikacje();
        break;
    }
    case 2:
    {
        string marka, model, system_operacyjny;
        int pamiec_ram;
        float rozmiar_ekranu;
        cout << "Podaj specyfikacje smartfona=";
        cin >> marka >> model >> system_operacyjny >> pamiec_ram >> rozmiar_ekranu;
        Smartfon telefon(marka, model ,system_operacyjny, pamiec_ram, rozmiar_ekranu);
        telefon.pokaz_dane();
        cout << endl << "OS=";
        cin >> system_operacyjny;
        telefon.zmien_system_operacyjny(system_operacyjny);
        cout << "RAM=";
        cin >> pamiec_ram;
        telefon.zmien_ram(pamiec_ram);
        telefon.pokaz_dane();
        break;
    }
    case 3:
    {
        Rower bajk;
        string typ;
        int liczba_biegow;
        float waga;
        bajk.pokaz_dane();
        cout <<endl<< "Typ=";
        cin >> typ;
        bajk.zmien_typ(typ);
        cout << "Liczba biegow=";
        cin >> liczba_biegow;
        bajk.zmien_liczbe_biegow(liczba_biegow);
        cout << "Waga=";
        cin >> waga;
        bajk.zmien_wage(waga);
        bajk.pokaz_dane();
        break;
    }
    default:
        cout << "Niepoprawny numer zadania";
    }
}
