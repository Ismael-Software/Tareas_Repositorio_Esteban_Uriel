print("Ingrese varios números separados por espacios:")
entrada = input().split()

arreglo = [float(numero) for numero in entrada]
suma_total = sum(arreglo)
numero_mayor = max(arreglo)

print("El arreglo ingresado es: " , arreglo)
print("La suma de todos los elementos es: ",suma_total)
print("El número mayor en el arreglo es: ",numero_mayor)