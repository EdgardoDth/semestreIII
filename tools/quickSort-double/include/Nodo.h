#ifndef NODO_H
#define NODO_H


class Nodo
{
    private:
        int info;
        Nodo* anterior;
        Nodo* siguiente;
    public:
        Nodo();

        void setInfo(int);
        void setAnterior(Nodo*);
        void setSiguiente(Nodo*);

        int getInfo();
        Nodo* getAnterior();
        Nodo* getSiguiente();
        friend class Lista;
};

#endif // NODO_H
