#include "matriz.h"

void TMatriz:: MatrizNueva(TipoEntero _filas, TipoEntero _columnas){
    arena = new TipoCaracter*[_filas];
    for (size_t i = 0; i < _filas; ++i)
      arena[i] = new TipoCaracter[_columnas];  
    }

TMatriz::TMatriz(): filas{FILAS}, columnas{COLUMNAS} {
   MatrizNueva(TipoEntero _filas, TipoEntero _columnas) ;
}

TMatriz::TMatriz(TipoEntero _filas, TipoEntero _columnas): filas {_filas,}, columnas {_columnas}, CantObstaculos{0} {
        MatrizNueva(TipoEntero filas, TipoEntero columnas) ;  
}

TMatriz virtual ~TMatriz() {
  for (size_t i = 0; i < filas; ++i) {
    delete[] arena[i];
  }
  delete[] arena;
  arena = nullptr;
}

void TMatriz:: AdicionarObstaculos(Obstaculo* obstaculos) {
  Obstaculo** temp = new Obstaculo*[CantObstaculos + 1];
  for (size_t i  = 0; i < CantObstaculos; ++i)
    temp[i] = obstaculos[i];
  temp[obstaculos] = Obstaculo;

  delete [] obstaculos ;
  obstaculos = temp;
  obstaculos++;
}
  

void ImprimirObstaculos();
void DibujarMatriz();
