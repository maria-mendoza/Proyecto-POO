#include "obstaculo.h"

void PosicionarObstaculos()
{
        int k = 0;
        while(k < obstaculos)
        {
                int x = rand() % filas;
                int y = rand() % columnas;
                if(x!=3 and y!=2){
                  if(x!=9 and y!=0){
                    if(matriz[x][y] != "⛰")
                    {
                        k++;
                        matriz[x][y] = "⛰";
                     }
                    }
                  }
        }
}
 
