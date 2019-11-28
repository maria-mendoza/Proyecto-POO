#ifndef PROYECTONATMAR_MAPAS_H
#define PROYECTONATMAR_MAPAS_H
#include "matriz.h"

class mapas {
public:
    //constructor por defecto no recibe nada
    mapas();

    void LLenar(TipoEntero filas, TipoEntero columnas,   TMatriz matt);
    friend class MenuPrincipalMapas;
};

#endif //PROYECTONATMAR_MAPAS_H
