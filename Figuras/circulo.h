#ifndef CIRCULO_DEFINIDO
#define CIRCULO_DEFINIDO

#include "figura.h"

class Circulo:public Figura
{
    private:
        float radio;
    
    public:
        Circulo(float r);
        void calcularArea();
    
};

#endif