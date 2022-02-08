#include <iostream>

using namespace std;

int main()
{
    int CALCULO = 0 ;
    int PROGRAMACION = 0;
    int PROSESOADM = 0;
    int FISICA = 0;
    int DERECHOIFN = 0;

    cout << "BIENVENIDO AL PROGRAMA DE SUS NOTAS" <<endl;

    cout << "1-INGRESE SU NOTA DE CALCULO" << endl;
    cin >> CALCULO;

    cout << "2-INGRESE SU NOTA DE PROGRAMACION" <<endl;
    cin >> PROGRAMACION;

    cout << "3-INGRESE SU NOTA DE PROCESO ADMINISTRATIVO " << endl;
    cin >> PROSESOADM;

    cout << "4-INGRESE SU NOTA DE FISICA" << endl;
    cin >> FISICA;

    cout << "5-INGRESE SU NOTA DE DERECHO INFORMATICO" << endl;
    cin >> DERECHOIFN;

    cout << "CALCULO 1:"<<endl;
    switch(CALCULO){
    case  100 :
        cout <<"USTED APROBO EL CURSO CON 100 PUNTOS FELICIDADES" <<endl;
        break;
    default:
        if(CALCULO >= 61){
                cout <<"USTED APROBO EL CURSO" <<endl;
                }else{cout <<"USTED REPROBO EL CURSO" <<endl;
                }
    }
     cout << "PROGRAMACION:"<<endl;
    switch(PROGRAMACION){
    case  100 :
         cout <<"USTED APROBO EL CURSO CON 100 PUNTOS FELICIDADES" <<endl;
        break;
    default:
        if(PROGRAMACION >= 61){
                cout <<"USTED APROBO EL CURSO" <<endl;
                }else{cout <<"USTED REPROBO EL CURSO" <<endl;
                }
    }
    cout << "PROCESO ADMIINISTRATIVO:"<<endl;
    switch(PROSESOADM){
    case  100 :
         cout <<"USTED APROBO EL CURSO CON 100 PUNTOS FELICIDADES" <<endl;
        break;
    default:
        if(PROSESOADM >= 61){
                cout <<"USTED APROBO EL CURSO" <<endl;
                }else{cout <<"USTED REPROBO EL CURSO" <<endl;
                }
    }
    cout << "FISICA :"<<endl;
    switch(FISICA){
    case  100 :
         cout <<"USTED APROBO EL CURSO CON 100 PUNTOS FELICIDADES" <<endl;
        break;
    default:
        if(FISICA >= 61){
                cout <<"USTED APROBO EL CURSO" <<endl;
                }else{cout <<"USTED REPROBO EL CURSO" <<endl;
                }
    }
    cout << "DERECHO INFORMATICO :"<<endl;
    switch(DERECHOIFN){
    case  100 :
         cout <<"USTED APROBO EL CURSO CON 100 PUNTOS FELICIDADES" <<endl;
        break;
    default:
        if(DERECHOIFN >= 61){
                cout <<"USTED APROBO EL CURSO" <<endl;
                }else{cout <<"USTED REPROBO EL CURSO" <<endl;
                }
    }

    return 0;
}
