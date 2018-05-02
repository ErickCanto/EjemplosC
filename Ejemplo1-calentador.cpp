#include <iostream>

class Calentador
{
    private:
    int temperatura;
    int incrementa;
    int min;
    int max;
    
    public:
            Calentador(int min, int max, int temperatura = 0);
            void operator++();
            void operator--();
            void imprimeCentigrados();
            int accedeTemperatura() const;
            void imprimeFarenheit() const;
            bool operator==(Calentador otro); //Sobrecarga de metodo miembro
}; //punto y coma obligatorio

Calentador::Calentador(int min, int max, int temperatura)
{
    if(min > max){
        std::cout <<"Error en el rango min-max"  << std::endl;
        std::exit(EXIT_FAILURE);
     //throw "Error en el rango de min-max";
    }
    if(temperatura >= min && temperatura <= max){
    this->temperatura = temperatura;
    }
    else{
        this->temperatura = min;
    }
    incrementa = 3;

    this->min = min;
    this->max = max;
}

void Calentador::operator++()
{
    if(temperatura + incrementa <= max)
    {
        temperatura += incrementa;
    }
}

void Calentador::operator--()
{
    if(temperatura - incrementa >= min)
    temperatura -= incrementa;
}

void Calentador::imprimeCentigrados()
{
    std::cout << "La temperatura es " << temperatura << " °C" << std::endl;    
}

int Calentador::accedeTemperatura()const
{
    return temperatura;
}

void Calentador::imprimeFarenheit()const
{
    float farenheit = temperatura * 1.8 + 32;
    std::cout <<"La temperatura es "<< farenheit 
                << " °F "<< std::endl;
}

bool Calentador::operator==(Calentador otro)
{
    if(this->temperatura==otro.temperatura)
    {
        return true;
    }
    else 
    {
        return false;
    }
}


int main()
{
   // try{
    Calentador c1{-10,10};
    Calentador c2{0,30,10};
    
    //for(int i = 0; i < 10; i++){
    
    // c1==c2 es equivalente a c1.opeartor==(c2)
    if(c1==c2)
    {
        std::cout << "iguales\n";
    }
    else
    {
        std::cout << "diferentes\n";
    }
    
    
    // ++c1 es equivalente a c1.operator++();
    ++c1;
    c1.imprimeCentigrados();
    c1.imprimeFarenheit();
    //for(int i = 0; i < 10; i++){
    
     // --c2 es equivalente a c2.operator--();
    --c2;
    c2.imprimeCentigrados();
    c2.imprimeFarenheit();
   // }catch(const std::runtime_error &e){
        
    //}
}
