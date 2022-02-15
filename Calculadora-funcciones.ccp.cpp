#include <iostream>

using namespace std;

int rsuma(int nu1,int nu2)
{
    return nu1 + nu2;
}
int rresta(int nu1,int nu2)
{
    return nu1 - nu2;
}
int rmultiplicacion(int nu1,int nu2)
{
    return nu1 * nu2;
}
int rdivision(int nu1,int nu2)
{
    return nu1 / nu2;
}
int main()
{

    int nu1,nu2;

    int sum,rest,mult,div;

    cout <<"Ingrese el primer numero"<<endl;
    cin >> nu1;
    cout <<"Ingrese el segundo numero"<<endl;
    cin >> nu2;


    sum = rsuma(nu1,nu2);
     cout <<"Este es el resultado de la suma:"<< sum <<endl;

    rest = rresta(nu1,nu2);
     cout <<"Este es el resultado de la resta:"<< rest <<endl;

    mult = rmultiplicacion(nu1,nu2);
     cout <<"Este es el resultado de la multiplicacion:"<< mult <<endl;

    div = rdivision(nu1,nu2);
     cout <<"Este es el resultado de la divicion:"<< div <<endl;

     return 0;

     }
