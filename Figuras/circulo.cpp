#include "circulo.h"

Circulo::Circulo(float r)
{
    this->radio=r;
}
        
        
void Circulo::calcularArea()
{
    area = 3.1416*radio*radio;
}