#ifindef

#include <iostream>
#include <cstdlib>

using namespace std;
typedef int TipoEntero;
typedef char TipoCaracter;

const int filas = 10;
const int columnas = 10;

template <typename T> 
class TMatriz {
  private:
    TipoEntero filas;
    TipoEntero columnas;
    TipoCaracter **arena;
    Obstaculo **obstaculos =nullptr;
   
  public:
  TMatriz();
  (TipoEntero altura, TipoEntero ancho);
  TMatriz virtual ~TMatriz();
  void AdicionarObstaculos()(Obstaculo* obstaculos);
  void ImprimirObstaculos();
  void DibujarMatriz();
 
  #endif
