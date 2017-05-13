#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"

class Lista
{
    private:
        Nodo* primero;
    public:
        Lista();

        Nodo* getPrimero();
        void setPrimero(Nodo*);

        void print();
        void insert();
        Nodo* ultimo();

        int compare(Nodo*, Nodo*);
        void swapp(Nodo*, Nodo*);
        void ordena();
        void quicksort(Nodo*, Nodo*);
};

#endif // LISTA_H
