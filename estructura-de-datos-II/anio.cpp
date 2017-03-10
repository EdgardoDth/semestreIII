/**
 *Validar fecha incluyendo anio bisiesto
 **/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string dia_s;
    string mes_s;
    string anio_s;
    int dia;
    int anio;
    int mes;

    cout << "Ingresa el dia: ";
    cin >> dia_s;

    cout << "Ingresa mes: ";
    cin >> mes_s;

    cout << "Ingresa el anio: ";
    cin >> anio_s;

    dia  = atoi(dia_s.c_str());
    mes  = atoi(mes_s.c_str());
    anio = atoi(anio_s.c_str());

    if(anio >= 1000 && anio <= 9999) {
      if (dia > 0 && dia <= 31 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)) {
        cout << "Fecha valida" << endl;
      } else {
         if (dia > 0 && dia < 31 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) {
           cout << "Fecha valida" << endl;
         } else {
            if (mes == 2 &&(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0) ) && (dia > 0 && dia <= 29)) {
              cout << "Año bisiesto" << endl;
            } else {
               if (mes == 2 && dia > 0 && dia < 29) {
                 cout << "Fecha valida" << endl;
               } else {
                 cout << "Fecha invalida" << endl;
                }
              }
            }
        }
    } else {
        cout << "Fecha invalida...." << endl;
    }


 		return 0;


}
