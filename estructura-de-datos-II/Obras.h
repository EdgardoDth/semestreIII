#ifndef OBRAS_H
#define OBRAS_H

class Obras
{
    private:
        char nombre[30];
        char autor[30];
        char tipo[30];
        char etapa[30];
    public:
        Obras();

        void ingresar();
        void mostrarTodo();
        void buscar();
        void guardar();
        void leer();
};

#endif // OBRAS_H
