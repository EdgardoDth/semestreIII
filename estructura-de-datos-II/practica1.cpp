#include <iostream>
#include "Obras.h"
#include "Obras.cpp"

using namespace std;

int main()
{
    int opc;
    do {
    cout << "\t\tMENU:" << endl;
    cout << "1. Ingresar..."<< endl;
    cout << "2. Mostrar todo..." << endl;
    cout << "3. Buscar..." << endl;
    cout << "4. Guardar a disco..." << endl;
    cout << "5. Leer..." << endl;
    cout << "6. Salir" << endl;
    cin >> opc;
    cin.ignore();

    Obras aux;


        switch(opc)
        {
            case 1:
                    aux.ingresar();
                    aux.guardar();
                    break;
            case 2:
                    aux.mostrarTodo();
                    break;
            case 3:
                    aux.buscar();
                    break;
            case 4:
                    break;
            case 5:
                    aux.leer();
                    break;
            case 6:
                    cout << "Adios" << endl;
                    break;
            default:
                    cout << "opcion invalida"<< endl;
        }
    } while(opc != 6);

    return 0;
}
