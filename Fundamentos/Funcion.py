import math

def multiplicacion():
    num1=float(input("¿Ingrese el primer numero a multiplicar: "))
    num2=float(input("¿Ingrese el segundo numero a multiplicar: "))
    Multi=num1*num2
    print("La multiplicacion es:", (Multi))    
    return Multi

def raiz_cuadrada():
    numero=float(input("Ingrese un numero para calcular su raiz cuadrada: "))
    raiz=math.sqrt(numero)
    print("La raiz cuadrada es:", (raiz)) 
    return raiz

def promedio_ponderado():
    nota1=float (input("¿Ingrese la primera nota: "))
    nota2=float (input("¿Ingrese la segunda nota: "))
    nota3=float (input("¿Ingrese la tercera nota: "))
    peso1=0.3
    peso2=0.3
    peso3=0.4
    promedio=(nota1*peso1)+(nota2*peso2)+(nota3*peso3)
    print("El promedio ponderado es:", (promedio))
    return promedio


multiplicacion()
raiz_cuadrada() 
promedio_ponderado()