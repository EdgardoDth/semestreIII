#ifndef PILA_H
#define PILA_H
#include <string>

class Pila
{
    private:
        int num[50];
        char operadores[10];
        int topeN;
        int topeO;
    public:
        Pila();

        void push(int);
        void push(char);
        void pop();
        int pilaLLena();
        int pilaVacio();
        void expresion(std::string);
};

#endif // PILA_H
