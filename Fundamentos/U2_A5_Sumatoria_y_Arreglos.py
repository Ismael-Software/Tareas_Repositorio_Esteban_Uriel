import random

n = 10
x = [1,2,3,4,5,6,7,8,9,10]
w = []

for i in range(n):
    numero = random.randint(0,10)
    w.append(numero)

resultados = []
suma = 0

for i in range(n):
    calculo = x[i] * w[i]
    resultados.append(calculo)
    suma = suma + calculo 

print("Resultados:", resultados)
print("Suma total:", suma)

objetivo = [6,8,3,8,54,7,8,2,9,10]
if objetivo != resultados:
    print("No coinciden - necesita ajuste")
else:
    print("¡Coinciden perfectamente!")