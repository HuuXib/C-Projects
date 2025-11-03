#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double a,b,c,delta,x1,x2;
    double pierwiastek;
    cout <<"Podaj twój pierwszy współczynnik a: ";
    cin >> a;
    cout <<"Podaj drugi współczynnik b: " ;
    cin >>b;
    cout <<"podaj wyraz wolny c: " ;
    cin>>c;
    delta = b*b - 4*a*c;
    if (a==0){
        cout << "To nie jest funkcja kwadratowa poniewaz wspolczynnik a nie moze byc rowny 0"<<endl;
        return 1;
    }
    if (delta<0){
        cout <<"Delta jest ujemna i wynosi"<<delta<< "a nie chce mi sie dodawac liczb zespolonych";
    }
    else{
    pierwiastek = sqrt(delta);
    x1 = (-b + pierwiastek)/(2 * a);
    x2 = (-b - pierwiastek)/(2 *a);
    cout <<"Delta wyniesie: "<<delta<<endl;
    cout <<"x1 = "<<x1<<endl;
    cout <<"x2 = "<<x2<<endl;
    }
    return 0;


}