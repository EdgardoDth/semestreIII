# programa que calcula la distribuicion de poisson

import math

def factorial(x):
    if x == 0:
        return 1
    else:
        return x * factorial(x - 1)

# donde R es el numero de registros almacenados en un archivo
# donde N es el numero de direcciones posibles en un archivo
# donde X es el numero de registros asociados en un archivo

def disPoisson(r, n, x):
    num = (((r / n) ** x) * math.exp(-(r / n))) / factorial(x)
    return num

numN = (int)(input("Ingrese el numero de direcciones posibles: "))
numR = (int)(input("Ingrese el numero de registros almacenados: "))
numX = (int)(input("Ingrese el numero de registros asociados: " ))

print(disPoisson(numR, numN, numX))
