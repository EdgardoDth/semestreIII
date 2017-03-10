#include "Pila.h"
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

Pila::Pila()
{
    topeN = -1;
    topeO = -1;
    for(int i = 0; i < 10; i++)
    {
        operadores[i] = NULL;
    }

    for(int j = 0; j < 50; j++)
    {
        num[j] = NULL;
    }
}

void Pila::push(int dato)
{
    if(!pilaLLena()) {
        topeN++;
        num[topeN] = dato;
        cout << "Apilar dato: " << dato << endl;
    } else {
        cout << "Error, pila llena..." << endl;
    }
}

void Pila::push(char dato)
{
    if(!pilaLLena()) {
        topeO++;
        operadores[topeO] = dato;
        cout << "Apilar dato: " << dato << endl;
    } else {
        cout << "Error, pila llena..." << endl;
    }
}

void Pila::pop()
{
    if(!pilaVacio()) {
        num[topeN] = NULL;
        topeN--;
    } else {
        cout << "Error, pila vacia..." << endl;
    }
}

int Pila::pilaLLena()
{
    if (topeN == 49) {
        return 1;
    } else {
        return 0;
    }
}

int Pila::pilaVacio()
{
    if (topeN == -1) {
        return 1;
    } else {
        return 0;
    }
}

void Pila::expresion(string aux)
{
    int numero = 0;
    int resultado = 0;

    for(int i = 0; i < aux.length(); i++)
    {
        switch((char)aux[i])
        {
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '0':
                    numero = atoi(aux.substr(i,1).c_str());
                    push(numero);
                    break;
            case '*':
                    push((char)aux[i]);
                    if(!pilaVacio() && topeN >= 1) {
                        resultado = num[topeN -1] * num[topeN];
                        pop();
                        num[topeN] = resultado;
                    }
                    break;
            case '/':
                    push((char)aux[i]);
                    if(!pilaVacio() && topeN >= 1) {
                        resultado = num[topeN -1] / num[topeN];
                        pop();
                        num[topeN] = resultado;
                    }
                    break;
            case '+':
                    push((char)aux[i]);
                    if(!pilaVacio() && topeN >= 1) {
                        resultado = num[topeN -1] + num[topeN];
                        pop();
                        num[topeN] = resultado;
                    }
                    break;
            case '-':
                    push((char)aux[i]);
                    if(!pilaVacio() && topeN >= 1) {
                        resultado = num[topeN -1] - num[topeN];
                        pop();
                        num[topeN] = resultado;
                    }
                    break;
            case '$':
                    push((char)aux[i]);
                    if(!pilaVacio() && topeN >= 1) {
                        resultado = pow(num[topeN -1] , num[topeN]);
                        pop();
                        num[topeN] = resultado;
                    }
                    break;
        }
    }

    cout << endl << "\tEl resultado de su opracion es: " << num[topeN] << endl;
}


