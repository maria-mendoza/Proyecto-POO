#ifindef

#include <iostream>
#include <cstdlib>

using namespace std;

const int filas = 10;
const int columnas = 10;

class MatrizPrincipal{
  private:
    TipoEntero filas;
    TipoEntero columnas;
    TipoCaracter **arena;
    TipoEntero CantObstaculos;
    Obstaculo **obstaculos =nullptr;
  public:
  MatriPrincipal();
  MatrizPrincipal(TipoEntero altura, TipoEntero ancho);
  virtual ~MatrizPrincipal();
  void PosicionarObstaculos()(Obstaculo* obstaculos);
  void imprimirObstaculos();
  void dibujarMatriz();
 
  #endif
