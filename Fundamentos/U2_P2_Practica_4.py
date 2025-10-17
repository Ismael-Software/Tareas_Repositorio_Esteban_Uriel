veces = int(input("Cuántas veces?: "))
cont = 0

while cont < veces:
    num = int(input("Dame un número: "))
    if num == 0:
        print("Cero")
    elif num > 0:
        print("Positivo")
    else:
        print("Negativo")
    cont += 1
    
    
veces = int(input("Cuántos alumnos?: "))
cont = 0

while cont < veces:
    calif = float(input("Calificación: "))
    if calif > 7:
        if calif == 10:
            prom1 = float(input("Promedio general: "))
            prom2 = float(input("Promedio bachillerato: "))
        else:
            print("No cumple requisitos")
    else:
        print("Menor a 7")
    cont += 1
    
    
seguir = True

while seguir:
    num = int(input("Dame número: "))
    
    if num == 0:
        print("Cero")
    elif num > 0:
        print("Positivo")
    else:
        print("Negativo")
    
    resp = input("¿Continuar? (s/n): ")
    if resp == "n":
        seguir = False