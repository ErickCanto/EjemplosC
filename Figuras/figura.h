#ifndef FIGURA_INCLUIDA
#define FIGURA_INCLUIDA

class Figura
{
    protected:
        float area;
        
    public:
        Figura();
        virtual void calcularArea() = 0;
        void imprimirArea();
};

#endif