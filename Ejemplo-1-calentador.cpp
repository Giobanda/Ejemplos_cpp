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
        void imprimeCentigrados() const;
        int accedeTemperatura() const;
        void imprimeFarenheit() const;
    
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
    
   
    c1.calentar();
    c1.imprimeCentigrados();
    c1.imprimeFarenheit();
    
    
    c2.enfriar();
    c2.imprimeCentigrados();
    c2.imprimeFarenheit();
}

void Calentador::imprimeCentigrados() const
{
    std::cout<<"La temperatura es: "<<Temperatura<<"°C"<<std::endl;
}

int Calentador::accedeTemperatura() const
{
    return Temperatura;
}

void Calentador::imprimeFarenheit() const
{
    float farenheit=Temperatura*1.8+32;
    std::cout<<"La temperatura en Farenheit es: "<<farenheit<<"°F"<<std::endl;
}