#include <iostream>
#include "figura.h"

Figura::Figura()
{
    area=0;
}

void Figura::calcularArea()
{
    std::cout<<"No se como calcularArea\n";
}

void Figura::imprimirArea()
{
    std::cout<<"El área es: "<<area<<"\n";
}