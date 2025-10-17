print("Seleccione el algoritmo a ejecutar:")
print("1 - Cálculo de factorial")
print("2 - Aproximación de coseno")
print("3 - Generación de secuencia")

opcion = input("Opción seleccionada: ")

if opcion == "1":
    n = int(input("Número para factorial: "))
    f = 1
    for i in range(1, n + 1):
        f *= i
    print("Factorial:", f)

elif opcion == "2":
    import math
    x = float(input("Ángulo en radianes: "))
    n_terms = int(input("Número de términos: "))
    cos_approx = 0
    for k in range(n_terms):
        cos_approx += ((-1) ** k) * (x ** (2 * k)) / math.factorial(2 * k)
    print("Coseno aproximado:", cos_approx)

elif opcion == "3":
    a = int(input("Primer valor: "))
    b = int(input("Segundo valor: "))
    n = int(input("Elementos a mostrar: "))
    for i in range(n):
        print(a)
        a, b = b, a + b