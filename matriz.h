#ifindef

#include <iostream>
#include <cstdlib>

using namespace std;
typedef int TipoEntero;
typedef char TipoCaracter;


const int FILAS = 10;
const int COLUMNAS = 10;

template <typename T> 
class TMatriz {
  private:
    TipoEntero filas;
    TipoEntero columnas;
    TipoCaracter **arena;
    TipoEntero CantObstaculos
    Obstaculo **obstaculos =nullptr;
  void MatrizNueva(TipoEntero _filas, TipoEntero _columnas);
   
  public:
    TMatriz();
    TMatriz(TipoEntero _filas, TipoEntero _columnas);
    TMatriz virtual ~TMatriz();
    void AdicionarObstaculos()(Obstaculo* obstaculos);
    void ImprimirObstaculos();
    void DibujarMatriz();

  #endif
