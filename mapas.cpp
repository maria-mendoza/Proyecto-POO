#include "mapas.h"
#include <fstream>
using  namespace std;
mapas::mapas(  ){

}
void mapas::LLenar (TipoEntero filas, TipoEntero columnas , TMatriz matt ){
    const string fichero = "mapas.txt";
    fstream fi;
    fi.open(fichero);
    if (fi.is_open()){
        int num=0;
        string a="";
        string w="";
        num= 11 +  rand() % (21-11);
        cout<<"Numero aleatorio generado: "<<num<<" -----"<<endl<<endl;
        string cadena="";
        cadena = to_string(num);
        while(true){
            fi>>a;
            if(a==cadena){
                break;}
        }

        for (int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                fi>>w;
                istringstream x(w);
                x>>num;
                matt.arena[i][j]=num;

            }
        }
        fi.close();

    }
    else cerr<<"Error de lectura\n";
}

