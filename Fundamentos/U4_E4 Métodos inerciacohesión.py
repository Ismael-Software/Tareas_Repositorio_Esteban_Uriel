#Calcular la distancia euclideana entre dos puntos en un espacio n-dimensional.
import math
a1=0
b1=0
a2=0
b2=0
def distancia_euclideana(punto1, punto2):
    a1=float(input("Ingrese la coordenada x del punto 1: "))
    b1=float(input("Ingrese la coordenada y del punto 1: "))
    a2=float(input("Ingrese la coordenada x del punto 2: "))
    b2=float(input("Ingrese la coordenada y del punto 2: "))
    suma=0
    for i in range(len(punto1)):
        suma=(a1 - a2)**2 + (b1 - b2)**2
    distancia=math.sqrt(suma)
    return distancia

B=distancia_euclideana((a1,b1),(a2,b2))
print("La distancia euclideana entre los puntos es: ",B)

A=distancia_euclideana((a1,b1),(a2,b2))
print("La distancia euclideana entre los puntos es: ",A)

s=(B-A/max(A,B))
print("La metrica de silueta es: ",s)