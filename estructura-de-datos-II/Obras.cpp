#include <iostream>
#include <fstream>
#include "Obras.h"

using namespace std;

Obras::Obras() {}

void Obras::ingresar()
{
    cout << "Ingresa nombre: " << endl;
    cin.getline(nombre, 30);

    cout << "Ingresa autor: " << endl;
    cin.getline(autor, 30);

    cout << "Ingresa tipo: " << endl;
    cin.getline(tipo, 30);

    cout << "Ingresa etapa: " << endl;
    cin.getline(etapa, 30);
}

void Obras::mostrarTodo()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Autor: " << autor << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Etapa: " << etapa << endl;
}

void Obras::buscar()
{

    //FIXME
    char aux[30], aux1[30];

    cout << "Ingresa nombre: " << endl;
    cin.getline(aux, 30);

    while(!Leer.eof())
    {
        int i = 0;
        do {
            Leer.read((char*)&aux1[i], 1);
            i++;
        } while( aux1[i - 1] != '|');
        aux1[i -1] = '\0';
        if(!Leer.eof())
        break;

        if( aux = aux1)
    }
}

void Obras::guardar()
{
    ofstream Escribir;
    Escribir.open("obras.txt" ,ios::app);

    Escribir<< nombre << "|" << autor << "|" << tipo << "|" << etapa << "@" << endl;

    Escribir.close();
}

void Obras::leer()
{
    ifstream Leer("obras.txt");
    int aux;

    if(!Leer.good()) {
        cout << "error"<<endl;
    } else {
        while(!Leer.eof())
        {
            int i = 0;
            do {
                Leer.read((char*)&nombre[i], 1);
                i++;
            } while( nombre[i - 1] != '|');
            nombre[i -1] = '\0';
            if(!Leer.eof())
            break;

            do {
                Leer.read((char*)&autor[i], 1);
                i++;
            } while( nombre[i - 1] != '|');
            nombre[i -1] = '\0';
            if(!Leer.eof())
            break;

            do {
                Leer.read((char*)&tipo[i], 1);
                i++;
            } while( nombre[i - 1] != '|');
            nombre[i -1] = '\0';
            if(!Leer.eof())
            break;

            do {
                Leer.read((char*)&etapa[i], 1);
                i++;
            } while( nombre[i - 1] != '@');
            nombre[i -1] = '\0';
            if(!Leer.eof())
            break;
        }

        cout << nombre << endl;
        cout << autor << endl;
        cout << tipo << endl;
        cout << etapa << endl;

    }

    Leer.close();
}
