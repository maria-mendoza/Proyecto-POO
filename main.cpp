#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
 
const int filas = 10;
const int columnas = 10;
 
int obstaculos = 28;
 
string matriz[filas][columnas];

void MatrizNueva()
{
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

 
void Mostrar()
{
        for(int i=0; i < filas; i++)
        {
                for(int j=0; j < columnas; j++)
                {
                        cout << matriz[i][j] << " ";
                }
                cout << endl;
        }
}

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
 

int main()
{
        MatrizNueva();
        PosicionarObstaculos();
        Mostrar();
        return 0;
}
