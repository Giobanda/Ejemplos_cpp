
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
        void operator++();
        void enfriar();
        void imprimeCentigrados() const;
        int accedeTemperatura() const;
        void imprimeFarenheit() const;
        bool operator==(Calentador otro); //sobrecarga miembro de la clase
    
}; //punto y coma obkigatorio

Calentador::Calentador(int min,int max,int Temperatura=0) //codigo del constructor
{
    if(Temperatura>=min&& Temperatura<=max){
        this->Temperatura=Temperatura;}
    else{
        this->Temperatura=min;}
    Incremento=3;
    if(min>max)
    {
      std::cout<<"Error en el programa"<<std::endl;
       std::exit(EXIT_FAILURE);
      // throw"Error en el rango min-max;
       
    }
    
     this->min=min;
    this->max=max;
}

void Calentador::operator++()
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
    ++c1;
        Calentador c1{-10,10,13};
        Calentador c2{0,30,10};
    
   
        c1.operator++();
        c1.imprimeCentigrados();
        c1.imprimeFarenheit();
    
    
        c2.enfriar();
        c2.imprimeCentigrados();
        c2.imprimeFarenheit();
        
        if(c1==c2)
        {
            std::cout<<"iguales\n";
        }
        else
            std::cout<<"distintos\n";
        
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

bool Calentador::operator==(Calentador otro)
{
    if(this->Temperatura==otro.Temperatura)
    {
        return true;
    }
    else
    {
        return false;
    }
}