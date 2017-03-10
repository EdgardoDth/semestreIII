#ifndef PILA_H
#define PILA_H
#include <string>

class Pila
{
    private:
        char exp[50];
        int tope;
    public:
        Pila();

        void push(char);
        void pop();
        int pilaLLena();
        int pilaVacio();
        void expresion(std::string);
};

#endif // PILA_H
