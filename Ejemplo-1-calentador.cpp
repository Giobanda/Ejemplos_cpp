#include  <iostream>

class Calentador 
{
    private: 
    int Temperatura;
    int Incremento;
    
    public:
        Calentador();  // constructor
        void calentar();
        void enfriar();
        void imprimeTemperatura();
        int accedeTemperatura() const;
    
}; //punto y coma obkigatorio

Calentador::Calentador() //codigo del constructor
{
    Temperatura=15;
    Incremento=3;
}

void Calentador::calentar()
{
    Temperatura+=5;
}

void Calentador::enfriar()
{
    Temperatura-=5;   
}

int main()
{
    Calentador c1;
    Calentador c2;
    
    c1.calentar();
    c1.imprimeTemperatura();
    
    c2.enfriar();
    c2.imprimeTemperatura();
}

void Calentador::imprimeTemperatura()
{
    std::cout<<"La temperatura es: "<<Temperatura<<std::endl;
}

void Calentador:accedeTemperatura() const
{
    return Temperatura;
}