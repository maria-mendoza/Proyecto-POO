#ifndef PROYECTONATMAR_ALGORITMO_H
#define PROYECTONATMAR_ALGORITMO_H
#include "tipos.h"
#include "semaforo.h"

class algoritmo
{
    int xPos;
    int yPos;
    int level;
    int priority; 

public:
    algoritmo(int xp, int yp, int d, int p)
    {xPos=xp; yPos=yp; level=d; priority=p;}

    int getxPos() const {return xPos;}
    int getyPos() const {return yPos;}
    int getLevel() const {return level;}
    int getPriority() const {return priority;}

    void updatePriority(const int & xDest, const int & yDest)
    {
        priority=level+estimate(xDest, yDest)*10;
    }

    void nextLevel(const int & i)  
    {
        level+=10;
    }

    const int & estimate(const int & xDest, const int & yDest) const
    {
        static int xd, yd, d;
        xd=xDest-xPos;
        yd=yDest-yPos;

        d=static_cast<int>(sqrt(xd*xd+yd*yd));

        return(d);
    }
};

#endif //PROYECTONATMAR_ALGORITMO_H
