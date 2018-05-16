#include <iostream>
template <typename Tipo>

class Pila{


   private:
    int tope;
    Tipo *arreglo;
    int max;
   
   public:
    Pila(int tam); //Constructor
    ~Pila();       //Destructor
    void Push(Tipo dato);
    Tipo Pop();
};

template <typename Tipo>
Pila<Tipo>::Pila(int tam)
{
   max=tam;
   tope=0;
   arreglo=new Tipo[max];
}

template <typename Tipo>
Pila<Tipo>::~Pila()
{
    delete []arreglo;
}

template <typename Tipo>
void Pila<Tipo>::Push(Tipo dato)
{
    if(tope<=max)
    {
        arreglo[tope]=dato;
        tope+=1;
    }
    else{
        std::cout<<"Pila llena\n";
        }
}

template <typename Tipo>
Tipo Pila<Tipo>::Pop()
{
    if(tope>=1)
    {
        tope-=1;
        Tipo aux;
        aux=arreglo[tope];
        
        return aux;
    }
    else{
        std::cout<<"no hay datos para sacar\n";}
}

int main()
{
    Pila<int> miPila(3);
    
    miPila.Push(3);
    miPila.Push(7);
    int x=miPila.Pop();
    std::cout<<x<<"\n";
    x=miPila.Pop();
    std::cout<<x<<"\n";
    x=miPila.Pop();
    std::cout<<x<<"\n";
}