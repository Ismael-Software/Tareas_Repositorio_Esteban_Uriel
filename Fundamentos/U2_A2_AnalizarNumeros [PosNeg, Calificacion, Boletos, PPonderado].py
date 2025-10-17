compra = float(input("Monto compra: "))

if compra > 290000:
    total = compra * 0.9
    print("Pagar:", total)
else:
    print("Pagar:", compra)
    
veces = int(input("Cuántas compras?: "))
cont = 0

while cont < veces:
    monto = float(input("Monto: "))
    if monto > 290000:
        print("Pagar:", monto * 0.9)
    else:
        print("Pagar:", monto)
    cont += 1


examen = float(input("Examen: "))
tareas = float(input("Tareas: "))
practica = float(input("Práctica: "))
ejercicios = float(input("Ejercicios: "))

promedio = (examen * 0.4) + (tareas * 0.15) + (practica * 0.15) + (ejercicios * 0.3)
print("Promedio:", promedio)


n = int(input("Veces a repetir: "))
cont = 0

while cont < n:
    a = int(input("Número 1: "))
    b = int(input("Número 2: "))
    c = int(input("Número 3: "))
    
    if a >= b and a >= c:
        mayor = a
        if b >= c:
            medio, menor = b, c
        else:
            medio, menor = c, b
    elif b >= a and b >= c:
        mayor = b
        if a >= c:
            medio, menor = a, c
        else:
            medio, menor = c, a
    else:
        mayor = c
        if a >= b:
            medio, menor = a, b
        else:
            medio, menor = b, a
    
    print(mayor, medio, menor)
    cont += 1
    
    
    
while True:
    x1 = float(input("Valor 1: "))
    x2 = float(input("Valor 2: "))
    
    y1 = 5 * x1 + 3
    y2 = 5 * x2 + 3
    
    if y1 * y2 < 0:
        print("Hay solución")
        break
    else:
        print("No hay solución")
        break