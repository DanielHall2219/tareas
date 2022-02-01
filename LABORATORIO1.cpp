#include <iostream>

using namespace std;

int main()
{
    int x,y;
    int suma, resta, multiplicacion, division;

     cout << "INGRESE LA PRIMERA CANTIDAD" << endl;
     cin >> x;
     cout << "INGRESE LA SEGUNDA CANTIDAD" << endl;
     cin >> y;

    suma = x+y;
    resta= x-y;
    multiplicacion = x*y;
    division = x/y;

    cout << "LOS RESULTADOS SON:" << endl;
    cout << "LA SUMA ES : " <<suma << endl;
    cout << "LA RESTA ES : " <<resta << endl;
    cout << "LA MULTIPLICACION ES :" << multiplicacion << endl;
    cout << "LA DIVISION ES :" <<division << endl;


    return 0;
}
