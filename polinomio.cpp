#include <iostream>
#include <cmath>

class Polinomio
{
    private:
        int a;
        int b;
        int c;
        
    public:
        Polinomio(int a, int b, int c);
        int operator()(int x) const;
        float operator~() const;
        
    friend void operator>>(std::istream &,Polinomio &);
    friend void operator<<(std::ostream &,Polinomio );
};

Polinomio::Polinomio(int a, int b, int c)
{
        this->a=a;
        this->b=b;
        this->c=c;
}

int Polinomio::operator()(int x) const
{
        int r;
        
        r=(this->a*x*x)+(this->b*x)+(this->c);
        return r;
}

float Polinomio::operator~() const
{
        float r;
        int x=this->a;
        int y=this->b;
        int z=this->c;
        r=(-y+std::sqrt((y*y)-(4*x*z)))/(2*x);
        printf("%f",r);
        return r;
}

void operator>>(std::istream &entrada,Polinomio &p)
{
    std::cout << "Coeficiente a: ";
    entrada >> p.a;
    std::cout << "Coeficiente b: ";
    entrada >> p.b;
    std::cout << "Coeficiente c: ";
    entrada >> p.c;
}

void operator<<(std::ostream &salida,Polinomio p)
{
        salida << p.a << "x^2+" << p.b << "x+" << p.c << std::endl;
}

int main()
{
    Polinomio p{3,2,1};
    int x=2;
    
    int r=p(x);
    //std::cout<< "resultado: " << r;
    std::cin>>p;
    
    std::cout<<"La raiz del polinomio es: "<<~p<<std::endl;
    
    std::cout<<"El polinomio "<<p; 
    std::cout<< "Evaluado en 2 es: "<<p(x);
}