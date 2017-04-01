#programa que calcula la distribuicion de poisson

import math

def disPoisson(r, n, x):
    num = (((r / n) ** x) * math.exp(-(r / n))) / math.factorial(x)
    return num

numN = (int)(input("Ingrese el numero de direcciones posibles: "))
numR = (int)(input("Ingrese el numero de registros almacenados: "))
numX = (int)(input("Ingrese el numero de registros asociados: " ))

print(disPoisson(numR, numN, numX))
