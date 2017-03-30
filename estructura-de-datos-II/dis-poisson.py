#programa que calcula la distribuicion de poisson

import math

def factorial(x):
    if x == 0:
        return 1
    else:
        return x * factorial(x - 1)

def disPoisson(r, n, x):
    num = (((r / n) ** x) * math.exp(-(r / n))) / factorial(x)
    return num

numN = (int)(input("Ingrese el numero de direcciones posibles: "))
numR = (int)(input("Ingrese el numero de registros almacenados: "))
numX = (int)(input("Ingrese el numero de registros asociados: " ))

print(disPoisson(numR, numN, numX))
