#include "tipos.h"
#include "mapas.h"
#include "matriz.h"
#include "bandera.h"
#include "semaforo.h"
#include "funct.h"
#include "menu.h"
using  namespace std;
int main(){


int x;

  
    bandera _bandera(9,0);
    semaforo _semaforo(3,2);
    TMatriz campo (10,10);
    mapas map;
     bandera banderaa(9,0);
    semaforo semaforoo(3,2);
    TMatriz campoo (10,10);
    mapas mapaa;
string route="";
string routee="";
   
int eleccion;
    
    
      cout<<"ssssssss"<<endl;
      cout<<  "__________Bienvenido al Menú Principal___________ \n";
      cout   <<  "Este es el mapa aleatorio generado para ti: \n" ;
      campo.MatrizNueva(10,10);
      map.LLenar(10,10,campo);
      campo.Mostrar(10,10);
               cout   << "Escoge una opción de las siguientes: \n";
               cout   << "1. Quiero conocer el camino más corto al punto final \n" ;
               cout   << "2. Quiero salir del programa\n" ;
                cout   <<"3. Quiero que se genere otro mapa\n";
                   do{
    cout<<"Ingrese un número: ";
    cin>>eleccion;
      
  }while(eleccion<1 or eleccion>3);         
    
  cout << "Has escogido la opción " <<eleccion<< ".\n";
switch (eleccion){

  case 1: 
  
{ int xA=_semaforo.getvalorxI(),
            yA=_semaforo.getvaloryI(),
            xB=_bandera.getvalorxF(),
            yB=_bandera.getvaloryF();
           route=pathFind(xA, yA,xB ,yB, campo );

           cout<<"route: "<<route<<endl;
                if(route.length()>0)
                {
                    int j; char c;
                    int x=_semaforo.getvalorxI();
                    int y=_semaforo.getvaloryI();
                    cout<<"x: "<<x<<endl;
                    cout<<"y: "<<y<<endl;
                    campo.getmatriz()[x][y]=2;
                    for(int i=0;i<route.length();i++)
                    {
                        c =route.at(i);
                        j=atoi(&c); 
                        x=x+dx[j];
                        y=y+dy[j];
                        campo.getmatriz()[x][y]=3;
                    }

                    campo.getmatriz()[x][y]=4;
                  campo.Mostrar(10,10);
                  cout<<"este es el camino mas corto.";
        
              
                    }
                    if(route=="") 

     break; }

case 2:
  return 0; 
{cout<<"_________Saliste del Programa_________";
  break;
  }
  case 3:{
      campoo.MatrizNueva(10,10);
      mapaa.LLenar(10,10,campoo);
      campoo.Mostrar(10,10);
 int xA=_semaforo.getvalorxI(),
            yA=_semaforo.getvaloryI(),
            xB=_bandera.getvalorxF(),
            yB=_bandera.getvaloryF();
    
      cout<<"¡Se generó otro mapa aleatorio!";
  }

}

}
