#include "matriz.h"

TMatriz::TMatriz(): filas{FILAS}, columnas{COLUMNAS} {
  
  string matriz[filas][columnas];

  for(int i=0; i < filas; i++)
        {
                for(int j=0; j < columnas; j++)
                {
                        matriz[i][j] = "0";
                }
        }
        matriz[3][2]="🚦";
        matriz[9][0]="🏁";
}


  
TMatriz virtual ~TMatriz();
void AdicionarObstaculos()(Obstaculo* obstaculos);
void ImprimirObstaculos();
void DibujarMatriz();
