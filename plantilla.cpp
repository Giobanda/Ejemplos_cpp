#include <iostream>
template<typename Tipo>

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
Pila::Pila(int tam)
{
   max=tama;
   tope=0;
   arreglo=new Tipo[max];
}

template <typename Tipo>
Pila::~Pila()
{
    delete []arreglo;
}

template <typename Tipo>
void Pila::Push(Tipo dato)
{
    
}

template <typename Tipo>
Tipo Pila::Pop()
{
    
    
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