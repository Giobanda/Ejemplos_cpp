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
    if(Temperatura+Incremento<=30)
    {
    Temperatura+=Incremento;
    }
}

void Calentador::enfriar()
{
    if(Temperatura+Incremento>=-10)
    {
        Temperatura-=Incremento;   
    }
}

int main()
{
    Calentador c1;
    Calentador c2;
    
    for(int i=0;i<10;i++){
    c1.calentar();
    c1.imprimeTemperatura();}
    
    for(int i=0;i<10;i++){
    c2.enfriar();
    c2.imprimeTemperatura();}
}

void Calentador::imprimeTemperatura()
{
    std::cout<<"La temperatura es: "<<Temperatura<<std::endl;
}

int Calentador::accedeTemperatura() const
{
    return Temperatura;
}