#include "Nodo.h"

Nodo::Nodo()
{
    anterior = nullptr;
    siguiente = nullptr;
    info = 0;
}
void Nodo::setInfo(int i)
{
    info = i;
}

void Nodo::setAnterior(Nodo* a)
{
    anterior = a;
}

void Nodo::setSiguiente(Nodo* s)
{
    siguiente = s;
}

int Nodo::getInfo()
{
    return info;
}

Nodo* Nodo::getAnterior()
{
    return anterior;
}

Nodo* Nodo::getSiguiente()
{
    return siguiente;
}
