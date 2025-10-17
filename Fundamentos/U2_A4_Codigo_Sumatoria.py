import numpy as np

n = int(input("Número de iteraciones: "))
salidas = []
total = 0

for i in range(n):
    x = float(input("Valor x: "))
    w = float(input("Valor w: "))
    p = x * w
    total += p
    salidas.append(1 if p >= 0 else 0)

print("Salidas:", salidas)
print("Suma total:", total)