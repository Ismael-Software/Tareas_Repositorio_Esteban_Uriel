import math

def multiplicacion(Multi):
    print ("La multiplicacion es:", Multi)

def raiz_cuadrada(Raiz):
    print ("La raiz cuadrada es:", Raiz)
        
def promedio_ponderado(Promedio):
    print ("El promedio ponderado es:", Promedio)
    
num1= int(input("Ingrese el primer numero para la multiplicacion: "))
num2= int(input("Ingrese el segundo numero para la multiplicacion: "))
Multi= num1 * num2
multiplicacion(Multi)

numero= int(input("Ingrese un numero para calcular su raiz cuadrada: "))
Raiz= math.sqrt(numero)
raiz_cuadrada(Raiz) 

nota1=float(input("Ingrese la primera nota: "))
peso1=0.3
nota2=float(input("Ingrese la segunda nota: "))
peso2=0.4
nota3=float(input("Ingrese la tercera nota: "))
peso3=0.3
Promedio= (nota1*peso1)+(nota2*peso2)+(nota3*peso3)
promedio_ponderado(Promedio)