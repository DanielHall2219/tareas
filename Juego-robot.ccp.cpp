#include <iostream>
#include <fstream>
using namespace std;
void drawMap(int posX,int posY,char gameMap[10][10]){
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(posX==j && posY==i)
        {
            cout<<"R";
        }
      else
      {
            cout<<gameMap[i][j];
      }
    }
    cout<<endl;
  }
}
int main()
{
    ///creacion del archivo

    ofstream myfile ("GameData.txt");
    string nomb = "";
    cout <<" Bienvenid@ porfavor ingrese su nombre :" <<endl;
    cin >> nomb;
    int iz=0,dere=0,arri=0,ab=0,niter=0;
    int posX=3;
    int posY=3;
    char map[10][10]={{'1','1','1','1','1','1','1','1','1','1'},
		   {'1','0','0','0','0','0','0','0','0','1'},
		   {'1','0','0','0','0','0','0','0','0','1'},
		   {'1','0','0','0','0','0','0','0','0','1'},
		   {'1','0','0','0','0','0','0','0','0','1'},
		   {'1','0','0','0','0','0','0','0','0','1'},
		   {'1','0','0','0','0','0','0','0','0','1'},
		   {'1','0','0','0','0','0','0','0','0','1'},
		   {'1','0','0','0','0','0','0','0','0','1'},
		  {'1','1','1','1','1','1','1','1','1','1'}};
  char teclado;
  bool gameOver= false;
  drawMap(posX,posY,map);
  while(!gameOver)
  {
    cout << "Bienvenido(a)"  << endl;
    cout << "Controles Teclas --> w(arriba), a(izquierda), d(derecha) y s(abajo)" << endl;
    cout << "Controles Teclas --> p(Salida)" << endl;
    cin >> teclado;
    switch (teclado)
    {
        case 'a':
             if(posX!=1)
                {
            posX-=1;
            iz+=1;
             }
            break;

        case 'd':
             if(posX!=8){
            posX+=1;
             dere+=1;
             }
            break;

        case 'w':
             if(posY!=1){
            posY-=1;
             arri+=1;
             }
            break;

        case 's':
             if(posY!=8){
            posY+=1;
             ab+=1;
             }
            break;

        case 'p':
            gameOver=true;
        default:
            break;
    }
  drawMap(posX,posY,map);
  }
  niter=iz+dere+arri+ab;
  if (myfile.is_open())
  {
      myfile << "nombre:" <<endl;
      myfile <<nomb<<endl;
      myfile <<"Numero de iteraciones para la iz : " <<endl;
      myfile <<iz<<endl;
      myfile <<"Numero de iteraciones para la dere : " <<endl;
      myfile <<dere<<endl;
      myfile <<"Numero de iteraciones para arri : " <<endl;
      myfile <<arri<<endl;
      myfile <<"Numero de iteraciones para ab : " <<endl;
      myfile <<ab<<endl;
      myfile << "Numero de iteraciones totales :" <<endl;
      myfile <<niter<<endl;
      myfile.close();
  }

else cout << "Unable to open file"<<endl;
 return 0;
}
