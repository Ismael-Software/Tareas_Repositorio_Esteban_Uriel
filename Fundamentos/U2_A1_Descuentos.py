#Ejercicio 1

total=float(input("Ingrese el total de la compra: "))
if total>290000:
    descuento=total* 0.10
    total_pagar=total-descuento
    mensaje=f"Se aplica un descuento del 10%"
else:
    descuento=0
    total_pagar=total
    mensaje="No se aplica descuento."
print(mensaje)
print("Total a pagar: ", "$" , total_pagar)

#Ejercicio 2

n=int(input("¿Cuántas veces desea calcular el descuento? "))
for i in range(n):
 total=float(input("Ingrese el total de la compra: "))
 if total>290000:
    descuento=total* 0.10
    total_pagar=total-descuento
    mensaje=f"Se aplica un descuento del 10%"
else:
    descuento=0
    total_pagar=total
    mensaje="No se aplica descuento."
    print(mensaje)
    print("Total a pagar: ", "$" , total_pagar)
    