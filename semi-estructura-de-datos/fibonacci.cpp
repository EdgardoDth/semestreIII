/*
 *  SECUENCIA DE FIBONACCI
 *  PEREYRA CANCIO, EDGARDO
 */

 #include <iostream>

 using namespace std;

 int fibonacci(int x)
 {
     if(x == 0) {
        return 0;
     } else if (x == 1 or x == 2) {
        return 1;
     }

     return fibonacci(x - 1) + fibonacci(x - 2);
 }

 int main()
 {
    int a, c = 0;

    do {
        cout << "Ingrese el numero del cual desea su secuencia de fibonacci: ";
        cin >> a;

        cout << "El resultado es: " << fibonacci(a) << endl << endl;
        cout << "Si desea hacer otra operacion ingrese el numero 0" << endl;
        cout << ", sino ingrese cualquier numero: ";
        cin >> c;
    } while(c == 0);

    return 0;
 }
