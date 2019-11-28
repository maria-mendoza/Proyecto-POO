#include "matriz.h"


using namespace std;
TMatriz::TMatriz(TipoEntero _filas, TipoEntero _columnas ) {
    filas=_filas;
    columnas=_columnas;

}
void TMatriz::Liberar(TipoEntero _filas, TipoEntero _columnas){
    //liberacion de memoria dinamica
    {
        for (int i = 0; i < _filas; i++) {
            delete [] arena[i];
        }
        delete [] arena;
        arena = nullptr;

    }
}
void TMatriz::MatrizNueva(TipoEntero _filas, TipoEntero _columnas){
    //reserva de memoria
    const string fichero = "mapas.txt";

    arena = new TipoEntero*[_filas];
    for (size_t i = 0; i < _filas; ++i)
        arena[i] = new TipoEntero[_columnas];
    fstream fi;
    srand(time(nullptr));
    int num=0;
    string a= "99";
    fi.open(fichero);
    
    
    
//llenar


}

void TMatriz::Mostrar(TipoEntero _filas, TipoEntero _columnas) {

    //imprimir
    for(int i=0; i < filas; i++)
    {
        for(int j=0; j < columnas; j++){   
        if (i==9 && j==0){
            char letras[]={"F"};
            cout<<"  F ";
            arena[i][j]= letras[0];
        }
        else if(i==3 && j==2){
            char letras[]={"X"};
            cout<<"  X ";
            arena[i][j]= letras[0];
        }
        else{
        
          cout <<setw(3)<< arena[i][j] << " ";
        
          
        }
            
    }cout <<setw(3)<< endl;
}

}
