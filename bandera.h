
#ifndef PROYECTONATMAR_BANDERA_H
#define PROYECTONATMAR_BANDERA_H

#include "tipos.h"
class bandera {
private:
    TipoEntero xF;
    TipoEntero yF;
public:
    bandera(TipoEntero _xF, TipoEntero _yF){
        xF=_xF;
        yF=_yF;
    };
    TipoEntero getvalorxF(){return xF ;};
    TipoEntero getvaloryF(){return yF; };friend class algoritmo;
};



#endif //PROYECTONATMAR_BANDERA_H
