#include "tipos.h"
#include "mapas.h"
#include "matriz.h"
#include "bandera.h"
#include "semaforo.h"
#include "funct.h"
#include "menu.h"
using  namespace std;
int main(){
MenuPrincipalMapas j;

int x;

  
    bandera _bandera(0,9);
    semaforo _semaforo(3,2);
    TMatriz campo (10,10);
    mapas map;

    j.ensenarmenu(campo, map);
    //cin>>siInput;
    x=j.inputusuario();
     
    /* switch (x) {
        case 1:
      
            break;
        case 2:
            cout<<"saliste del programa";
            campo.Liberar (10,10);
            break;
        case 3:
             MenuPrincipalMapas _pmapas ();
            break;
    
 }*/
 
    // map.LLenar();

          string route=pathFind(_semaforo.getvalorxI(), _semaforo.getvaloryI(), _bandera.getvalorxF(), _bandera.getvaloryF(), campo );
                if(route.length()>0)
                {
                    int j; char c;
                    int x=_semaforo.getvalorxI();
                    int y=_semaforo.getvaloryI();
                    campo.getmatriz()[x][y]=2;
                    for(int i=0;i<route.length();i++)
                    {
                        c =route.at(i);
                        j=atoi(&c); 
                        x=x+dx[j];
                        y=y+dy[j];
                        campo.getmatriz()[x][y]=3;
                    }
                    campo.getmatriz()[x][y]=4;

                    // display the map with the route
                    for(int y=0;y<m;y++)
                    {
                        for(int x=0;x<n;x++)
                            if(campo.getmatriz()[y][x]==0)
                                cout<<setw(3)<<"0";
                            else if(campo.getmatriz()[y][x]==1)
                                cout<<setw(3)<<"1"; //obstacle
                            else if(campo.getmatriz()[y][x]==2)
                                cout<<setw(3)<<"S"; //start
                            else if(campo.getmatriz()[y][x]==3)
                                cout<<setw(3)<<"R"; //route
                            else if(campo.getmatriz()[y][x]==4)
                                cout<<setw(3)<<"F"; //finish
                        cout<<endl;
                    }

                    }
                    if(route=="") cout<<"An empty route generated!"<<endl;
                    cout<<"este es el camino mas corto.";










    
    

    //void PosicionarObstaculos(TipoEntero PosicionX, TipoEntero PosicionY );
    //vector<TMatriz> camino= getShortestPath TMatriz((1,3),TMatriz(4,5),arena,10,10);
    //for(int i=0;i<camino.size();i++){
    //cout<<"("<<camino[i].getx()<<", "<<camino[i].gety()<<")"<<endl;





    
/*
    MenuPrincipalMapas:ensenarmenu();
    std::cin >> siInput;
    MenuPrincipalMapas:inputusuario(siInput);
*/



return 0;

}

