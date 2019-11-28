#ifndef MENU_MENU_H
#define MENU_MENU_H

#include "tipos.h"
#include "matriz.h"
#include "mapas.h"

class MenuPrincipalMapas {
private:
    TipoEntero Opcion;
public:
    MenuPrincipalMapas(){};
    void ensenarmenu( TMatriz _matriz, mapas _mapa)
    {

      cout   <<  "__________Bienvenido al Menú Principal___________ \n";
      cout   <<  "Este es el mapa aleatorio generado para ti: \n" ;
      _matriz.MatrizNueva(10,10);
     _mapa.LLenar(10,10, _matriz);
      _matriz.Mostrar(10,10);
               cout   << "Escoge una opción de las siguientes: \n";
               cout   << "1. Quiero conocer el camino más corto al punto final \n" ;
               cout   << "2. Quiero salir del programa\n" ;
                cout   <<"3. Quiero que se genere otro mapa\n";
               
                
    }
    TipoEntero inputusuario (){
    int eleccion;
    do{
    cout<<"Ingrese un número: ";
    cin>>eleccion;
  }while(eleccion<1 or eleccion>3);
  
  cout << "Has escogido: la opción " <<eleccion<< ".\n";

  return eleccion;
    

    
   
 
  
    }


};

#endif 
