#include <iostream>
#include "Figura.h"

Figura::Figura()
{
    area=0;
}

void Figura::calculaArea()
{
    std::cout<<"no se como calcular el area\n";
}

void Figura::imprimirArea()
{
    std::cout<<"El area es"<<area<<"\n";

}