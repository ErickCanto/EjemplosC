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

template<typename Tipo>
Pila<Tipo>::Pila(int tam)
{
    tope=0;
    max=tam;
    
    arreglo = new Tipo[max];
}

template<typename Tipo>
Pila<Tipo>::~Pila
{
    delete [ ] arreglo;
}

template<typename Tipo>
void Pila<Tipo>::Push(Tipo dato)
{
    
}

template<typename Tipo>
Tipo Pila<Tipo>::Pop()
{
    
}


int main()
{
    Pila<int> miPila{5};
    
    miPila.Push(3);
    miPila.Push(7);
    
    int x=miPila.Pop();
    std::cout<<x<<std::endl;
    int x=miPila.Pop();
    std::cout<<x<<std::endl;
}