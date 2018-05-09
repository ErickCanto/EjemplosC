#include <iostream>

class Fraccion
{
    private:
        int numerador;
        int denominador;
        
    public: 
        Fraccion(int num,int den);
        Fraccion operator+ (Fraccion otro);
        Fraccion operator- (Fraccion otro); 
        Fraccion operator/ (Fraccion otro); 
        Fraccion operator* (Fraccion otro); 
        void imprimirFraccion();
        
    friend void operator<<(std::ostream &,Fraccion);
    friend void operator>>(std::istream &,Fraccion &);
};

Fraccion::Fraccion(int num,int den)
{
    this->numerador=num;
    this->denominador=den;
}

Fraccion Fraccion::operator+(Fraccion otro)
{
    int deno;
    int nume;
    
    nume=(this->numerador*otro.denominador)+(this->denominador*otro.numerador);
    deno=this->denominador*otro.denominador;
    
    Fraccion F3{nume,deno};
    return F3;
}

Fraccion Fraccion::operator-(Fraccion otro)
{
    int deno;
    int nume;
    
    nume=(this->numerador*otro.denominador)-(this->denominador*otro.numerador);
    deno=this->denominador*otro.denominador;
    
    Fraccion F3{nume,deno};
    return F3;
}


void Fraccion::imprimirFraccion()
{
    std::cout << this->numerador << "/" << this->denominador << std::endl;
}

void operator<<(std::ostream &salida,Fraccion f)
{
    salida << f.numerador << "/" << f.denominador << std::endl;
}

void operator>>(std::istream &entrada,Fraccion &f)
{
    entrada >> f.numerador >> f.denominador;
}

int main()
{
    Fraccion f1{3,8};
    Fraccion f2{4,5};
    Fraccion suma=f1+f2;
    Fraccion resta=f1-f2;
    Fraccion entrada{0,0};
    Fraccion f3=f1+f2;

    suma.imprimirFraccion();
    resta.imprimirFraccion();
    
    std::cout << f3;
    std::cin >> entrada;
    std::cout << entrada;
}