#include <iostream>


template <typename Tipo>
class Pila
{
    private:
        int tope;
        Tipo *arreglo;
        int max;
        
    public:
        Pila(int tam);
        ~Pila();
        void Push(Tipo dato);
        Tipo Pop();
    
};