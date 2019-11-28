#ifndef PROYECTONATMAR_SEMAFORO_H
#define PROYECTONATMAR_SEMAFORO_H


class semaforo {
protected:
    TipoEntero xI;
    TipoEntero yI;
public:
    semaforo(TipoEntero _xI, TipoEntero _yI){
        xI=_xI;
        yI=_yI;

    };
    TipoEntero getvalorxI( ){return xI;};
    TipoEntero getvaloryI( ){return yI;};
    friend class mapas;
};





#endif //PROYECTONATMAR_SEMAFORO_H
