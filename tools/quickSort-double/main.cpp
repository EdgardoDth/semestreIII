#include <iostream>
#include "Lista.h"
using namespace std;

int main()
{
    int opc;
    Lista lista;

    do {
        cout << "1. inserta" << endl;
        cout << "2. imprime" << endl;
        cout << "3. ordena" << endl;
        cout << "4. salir" << endl;
        cin >> opc;
        cin.ignore();

        switch(opc)
        {
            case 1:
                    lista.insert();
                    break;
            case 2:
                    lista.print();
                    break;
            case 3:
                    lista.ordena();
                    break;
        }
    } while (opc != 4);
}
