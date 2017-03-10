/*
 * PRODUCTO DE UN NUMERO CON UNA FUNCION RECURSIVA
 * PEREYRA CANCIO, EDGARDO
 * 21 30 55 90 4
 */
#include <iostream>

 using namespace std;

 int producto(int x, int y)
 {
        if (y == 0) {
            return 0;
        }
        int c = y - 1;
        return  x + producto(x, c);;
 }

 int main()
 {
    int a, b, c = 0;

    do {
        cout << "Ingrese el primer numero: ";
        cin >> a;
        cout << "Ingrese el primer numero: ";
        cin >> b;

        cout << "El resultado es: " << producto(a, b) << endl;
        cout << "Si desea hacer otra operacion ingrese el numero 0" << endl;
        cout << ", sino ingrese cualquier numero: ";
        cin >> c;
    } while(c == 0);
    return 0;
 }
