#include <iostream>
#include "Lista.h"

using namespace std;

Lista::Lista()
{
    primero = nullptr;
}

Nodo* Lista::getPrimero()
{
    return primero;
}
void Lista::setPrimero(Nodo* a)
{
    primero = a;
}

void Lista::print()
{
    Nodo * aux = new Nodo();
    if (primero) {
        aux = primero;
        cout << "-------------------" << endl;
        while(aux)
        {
            cout << aux->getInfo() << endl;
            aux = aux->getSiguiente();
        }
    }

}
void Lista::insert()
{
    Nodo * aux = new Nodo();
    Nodo * obj = new Nodo();
    int numero;
    cout << "Ingrese numero: ";
    cin >> numero;
    obj->setInfo(numero);
    cin.ignore();

    if (primero) {
        aux = primero;
       while(aux->getSiguiente())
       {
           aux = aux->getSiguiente();
       }
       aux->setSiguiente(obj);
       obj->setAnterior(aux);
   } else {
       primero = obj;
   }
}

Nodo* Lista::ultimo()
{
    Nodo* aux = new Nodo();
    aux = primero;
    while(aux->getSiguiente())
    {
        aux = aux->getSiguiente();
    }
    return aux;
}

void Lista::ordena()
{
    if (primero) {
        quicksort(primero, ultimo());
    } else {
        cout << "lista vacia" <<endl;
    }
}

void Lista::swapp(Nodo* a, Nodo* b)
{
    int aux = a->getInfo();
    a->setInfo(b->getInfo());
    b->setInfo(aux);
}

int Lista::compare(Nodo * a, Nodo* b)
{
    if (a->getInfo() >= b->getInfo())
        return 1;
    if (a->getInfo() <= b->getInfo())
        return -1;

    return 0;
}

void Lista::quicksort(Nodo* ini , Nodo* fin)
{
    Nodo* iniAux = new Nodo();
    Nodo* finAux = new Nodo();
    Nodo* pivAux = new Nodo();
    iniAux = ini;
    finAux = fin;
    pivAux = ini;

    while (1)
    {
        while(compare(pivAux, finAux) == -1 && pivAux != finAux)
            finAux = finAux->getAnterior();

        if (pivAux == finAux) {
            break;
        } else if (compare(pivAux, finAux) == 1){
            swapp(pivAux, finAux);
            pivAux = finAux;
        }

        while(compare(pivAux, iniAux) == 1 && iniAux != pivAux)
            iniAux = iniAux->getSiguiente();

        if (pivAux == iniAux) {
            break;
        } else if (compare(pivAux, iniAux) == -1){
            swapp(pivAux, iniAux);
            pivAux = iniAux;
        }
    }

    if (ini != pivAux) {
        quicksort(ini, pivAux->getAnterior());
    }
    if (pivAux != fin){
        quicksort(pivAux->getSiguiente(), fin);
    }
}
