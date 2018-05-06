# include <iostream>

class Fraccion
{
    private:
        int numerador;
        int denominador;
        
    public:
        Fraccion(int numerador,int denominador);
        void imprimeFraccion() const;
        Fraccion operator*(Fraccion multiplicado);
        Fraccion operator/(Fraccion dividido);
        Fraccion operator+(Fraccion sumado);
        Fraccion operator-(Fraccion restado);
};

Fraccion::Fraccion(int numerador,int denominador)
{
    this->numerador=numerador;
    this->denominador=denominador;
}

void Fraccion::imprimeFraccion() const
{
    std::cout<<numerador<<"/"<<denominador<<std::endl; 
}

Fraccion Fraccion::operator*(Fraccion multiplicado)
{
    int Nnum,Nden;
    
    
    Nnum=this->numerador*multiplicado.numerador;
    Nden=this->denominador*multiplicado.denominador;
    Fraccion resultado(Nnum,Nden);
    return resultado;
}

Fraccion Fraccion::operator/(Fraccion dividido)
{
    int Nnum,Nden;
    
    Nnum=this->numerador*dividido.denominador;
    Nden=this->denominador*dividido.numerador;
    Fraccion resultado(Nnum,Nden);
    return resultado;
}

Fraccion Fraccion::operator+(Fraccion sumado)
{
    int Nnum,Nden;
    
    Nnum=(this->numerador*sumado.denominador)+(this->denominador*sumado.numerador);
    Nden=this->denominador*sumado.denominador;
    Fraccion resultado(Nnum,Nden);
    return resultado;
}

Fraccion Fraccion::operator-(Fraccion restado)
{
    int Nnum,Nden;
    
    Nnum=(this->numerador*restado.denominador)-(this->denominador*restado.numerador);
    Nden=this->denominador*restado.denominador;
    Fraccion resultado(Nnum,Nden);
    return resultado;
    
}

int main()
{
    
    Fraccion f1(3,8);
    Fraccion f2(4,5);
    Fraccion resultado(0,0);
    
    resultado=f1*f2;
    resultado.imprimeFraccion();
    
    resultado=f1/f2;
    resultado.imprimeFraccion();
    
    resultado=f1+f2;
    resultado.imprimeFraccion();
    
    resultado=f1-f2;
    resultado.imprimeFraccion();
}