# include<iostream>
# include<cmath>

class Polinomio
{
    private:
    
        int a;
        int b;
        int c;
        
    friend void operator<<(std::ostream &salida,Polinomio);
    friend void operator>>(std::istream &entrada,Polinomio&);
    
    public:
        
        Polinomio (int a,int b,int c);
        int operator() (int evaluado);
        int operator~();
    
};

Polinomio::Polinomio(int a,int b, int c)
{
    this->a=a;
    this->b=b;
    this->c=c;
}

int Polinomio ::operator() (int evaluado)
{
    int resultado;
    resultado=(this->a*(evaluado*evaluado)+(this->b*evaluado)+(this->c));
    return resultado;
}

void operator <<(std::ostream& salida,Polinomio p)
{
    salida<<p.a<<"x²+"<<p.b<<"x+"<<p.c<<"\n";
    
}

void operator>>(std::istream& entrada,Polinomio &p)
{
    entrada>>p.a>>p.b>>p.c;
}

int Polinomio::operator~()
{
    int raizResultado;
    
    raizResultado=((-this->b)+(sqrt((this->b*this->b)-(4*this->a*this->c))))/(2*this->a);

    return raizResultado;
}

int main()
{
    int r;
    Polinomio p1(3,2,1);
    
    std::cin>>p1;
    r=p1(2);
    std::cout <<r  << std::endl;
    std::cout<<p1;
    float raiz=~p1;
    std::cout<<"es"<<raiz;    
}




/*

Polinomio p;
std::cin>>p;
std::cout<<"la raiz de" << p;
float raiz=~p; p.operator
std::cout<<"es"<<raiz;
std::cout<<p(~p);

*/