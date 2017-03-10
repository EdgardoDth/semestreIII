/*
 *
 * PROGRAMA QUE CALCULA EL RESULTADO DE UNA
 * EXPRESION DADA EN NOTACION POSFIJA
 *
 * SEMINARIO DE ESTRUCTURA DE DATOS I
 *
 * @ PEREYRA CANCIO, EDGARDO RAUDEL
 * 213055904
 *
 */

#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Pila.h"

using namespace std;

int main()
{
    string opc;
    int iOpc = 0;
    string expresion;
    Pila pila;

    do {
        cout << "\tMENU" << endl;
        cout << "1. Comprobar expresion..." << endl;
        cout << "2. Salir..." << endl;
        getline(cin, opc);

        iOpc = atoi(opc.c_str());

        switch(iOpc)
        {
            case 1:
                cout << "Ingrese la expresion: ";
                getline(cin, expresion);

                pila.expresion(expresion);
                break;
            case 2:
                    cout << "Adios..." << endl;
                    break;
            default:
                    cout << "Opcion invalida...." << endl;
        }
    } while(iOpc != 2);

    return 0;
}
