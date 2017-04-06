from Nodo import Nodo

class Lista:
    def __init__(self):
        self.primero = Nodo()
        self.elementos = 0

    def getElementos(self):
        return self.elementos

    def getPrimero(self):
        return self.primero

    def setPrimero(self, p):
        self.primero = p

    def insertarInicio(self, ele):
        if self.primero.getInfo() == None:
            self.primero.setInfo(ele)
        else:
            temp = Nodo()
            temp.setInfo(ele)
            temp.setSiguiente(self.primero)
            self.primero = temp

    def insertarFinal(self):
        temp = Nodo()
        obj = Nodo()

        obj.info = input("Ingrese algo: ")

        if self.primero.getInfo() != None:
            temp = self.primero
            while temp.getSiguiente() != None:
                temp = temp.getSiguiente()
            temp.setSiguiente(obj)
        else:
            self.primero = obj

    def imprimir(self):
        temp = Nodo()
        temp = self.primero

        while temp:
            print("Informacion: {}".format(temp.getInfo()))
            temp = temp.getSiguiente()
    """ Metodos recien agregados..."""
    def insertarPorPosicion(self):
        pos = (int)(input("Ingrese la posicion: "))
        if pos < 0:
            print("Posicion invalida....")
            return

        obj = Nodo()
        cont = 1
        aux = Nodo()
        obj.info = input("Ingrese algo: ")

        if pos == 1 or pos == 0:
            self.insertarInicio(obj.info)
            return

        if self.primero != None:
            aux = self.primero
            while aux.getSiguiente() and cont < pos - 1:
                cont +=1
                aux = aux.getSiguiente()
            obj.setSiguiente(aux.getSiguiente())
            aux.setSiguiente(obj)
        else:
            self.primero = obj

    def eliminarPrimero(self):
        aux = Nodo()
        aux = self.primero
        self.primero = self.primero.getSiguiente()
        del aux
        print("Elemento eliminado...")

    def eliminarFinal(self):
        aux = Nodo()
        s = Nodo()

        if self.primero != None:
            aux = self.primero
            while aux.getSiguiente() != None:
                s = aux
                aux = aux.getSiguiente()

            s.setSiguiente(None)
            del aux
            self.elementos -= 1
            print("Ultimo eliminado")

    def eliminarPorPosicion(self):
        pos = (int)(input("Ingrese la posicion a eliminar: "))
        if pos <= 0:
            print("Posicion invalida....")
            return
        elif pos == 1:
            self.eliminarPrimero()
        elif pos < self.elementos:
            aux = Nodo()
            aux = self.primero
            cont = 1
            while cont < pos-1:
                aux = aux.getSiguiente()
                cont +=1
            nod = Nodo()
            nod = aux.getSiguiente()
            aux.setSiguiente(nod.getSiguiente())
            self.elementos -= 1
            del nod
        elif pos == self.elementos:
            self.eliminarFinal()
