
//cppp references referencias a c++

#include  <iostream> 

class Calentador 
{
    private: 
    int Temperatura;
    int Incremento;
    int min;
    int max;
    
    public:
        Calentador(int min,int max,int Temperatura);  // constructor
        void calentar();
        void enfriar();
        void imprimeCentigrados() const;
        int accedeTemperatura() const;
        void imprimeFarenheit() const;
    
}; //punto y coma obkigatorio

Calentador::Calentador(int min,int max,int Temperatura=0) //codigo del constructor
{
    if(Temperatura>=min&& Temperatura<=max){
        this->Temperatura=Temperatura;}
    else{
        this->Temperatura=min;}
    Incremento=3;
    if(min<max)
    {
      std::cout<<"Error en el programa"<<std::endl;
       std::exit(EXIT_FAILURE);
      // throw"Error en el rango min-max;
       
    }
    
     this->min=min;
    this->max=max;
}

void Calentador::calentar()
{
    if(Temperatura+Incremento<=this->max)
    {
    Temperatura+=Incremento;
    }
}

void Calentador::enfriar()
{
    if(Temperatura-Incremento>=-this->min)
    {
        Temperatura-=Incremento;   
    }
}

int main()
{
    //try
    //{
        Calentador c1{-10,10};
        Calentador c2{0,30,-10};
    
   
        c1.calentar();
        c1.imprimeCentigrados();
        c1.imprimeFarenheit();
    
    
        c2.enfriar();
        c2.imprimeCentigrados();
        c2.imprimeFarenheit();
        
    //} //catch(const std::runtime_error &e);
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