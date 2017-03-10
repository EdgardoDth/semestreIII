#include "Pila.h"
#include <iostream>

using namespace std;

Pila::Pila()
{
    tope = -1;
    for(int i = 0; i < 50; i++)
    {
        exp[i] = NULL;
    }
}

void Pila::push(char dato)
{
    if(!pilaLLena()) {
        tope++;
        exp[tope] = dato;
        cout << "Apilar dato: " << dato << endl;
    } else {
        cout << "Error, pila llena..." << endl;
    }
}

void Pila::pop()
{
    if(!pilaVacio()) {
        exp[tope] = NULL;
        tope--;
    } else {
        cout << "Error, pila vacia..." << endl;
    }
}

int Pila::pilaLLena()
{
    if (tope == 49) {
        return 1;
    } else {
        return 0;
    }
}

int Pila::pilaVacio()
{
    if (tope == -1) {
        return 1;
    } else {
        return 0;
    }
}

void Pila::expresion(string aux)
{
    for(int i = 0; i < aux.length(); i++)
    {
        switch((char)aux[i])
        {
            case '(':
                    push((char)aux[i]);
                    break;
            case '[':
                    push((char)aux[i]);
                    break;
            case '{':
                    push((char)aux[i]);
                    break;
            case ']':
                    if(exp[tope] == '[') {
                        pop();
                        cout << "Se elimino: " << aux[i] << endl;
                    } else {
                        push((char)aux[i]);
                    }
                    break;
            case ')':
                    if(exp[tope] == '(') {
                        pop();
                        cout << "Se elimino: " << aux[i] << endl;
                    } else {
                        push((char)aux[i]);
                    }
                    break;
            case '}':
                    if(exp[tope] == '{') {
                        pop();
                        cout << "Se elimino: " << aux[i] << endl;
                    } else {
                        push((char)aux[i]);
                    }
                    break;
        }
    }

    if(pilaVacio()) {
        cout << "Expresion correcta...." << endl;
    } else {
        cout << "Expresion invalida...." << endl;
    }
}

