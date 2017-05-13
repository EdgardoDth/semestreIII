#
# autor: Pereyra Cancio Edgardo
# descripcion: Implementacion de una lista dinamica simplemente
#              ligada de numeros
# 

from Lista import Lista

miLista = Lista()

while True:
    print("\n\n\tMenu de opciones")
    print("1. Insertar al inicio")
    print("2. Insertar al final")
    print("3. Imprimir lista")
    print("4. Insertar por posicion")
    print("5. Eliminar primero")
    print("6. Eliminar Ultimo")
    print("7. Eliminar por posicion")
    print('8. Salir')
    opc = (int)(input("\nEscriba la opcion: "))

    if opc == 1:
        miLista.insertarInicio((int)(input("Escriba lo que quiere ingresar: ")))
    elif opc == 2:
        miLista.insertarFinal()
    elif opc == 3:
        miLista.imprimir()
    elif opc == 4:
        miLista.insertarPorPosicion()
    elif opc == 5:
        miLista.eliminarPrimero()
    elif opc == 6:
        miLista.eliminarFinal()
    elif opc == 7:
        miLista.eliminarPorPosicion()
    elif opc  == 8:
        print("Adios...")
        break
