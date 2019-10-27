#include "obstaculo.h"

void PosicionarObstaculos(TipoEntero PosicionX, TipoEntero PosicionY )
{
        int k = 0;
        while(k < obstaculos)
        {
                PosicionX = rand() % filas;
                PosicionY = rand() % columnas;
                if(PosicionX!=3 and y!=2){
                  if(x!=9 and y!=0){
                    if(matriz[PosicionX][PosicionY ] != "⛰")
                    {
                        k++;
                        matriz[PosicionX][PosicionY ] = "⛰";
                     }
                    }
                  }
        }
}
 
