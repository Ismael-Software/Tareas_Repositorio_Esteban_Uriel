# Neurona para la función OR utilizando el algoritmo de aprendizaje supervisado
w0=1.5
w1=2.5
w2=1.5
#Puerta OR es linealmente separable
(0, 0, 0),
(0, 1, 1),
(1, 0, 1),
(1, 1, 1)
#Puerta AND es linealmente separable
(0, 0,0),
(0, 1, 0),
(1, 0, 0),
(1, 1, 1)
#Puerta NOR es la negación de OR
(0, 0, 1),
(0, 1, 0),
(1, 0, 0),
(1, 1, 0)
#Puerta NAND es la negación de AND
(0, 0, 1),
(0, 1, 1),
(1, 0, 1),
(1, 1, 0)
#Puerta XOR esta no es linealmente separable
(0, 0, 0),
(0, 1, 1),
(1, 0, 1),
(1, 1, 0)

Tabla_bernoulli=[
(0, 0, 0),
(0, 1, 1),
(1, 0, 1),
(1, 1, 1)
    ]



def funcion(net):
    if net>=0:
        return 1
    else:
        return 0

# Bucle de aprendizaje hasta que no haya errores
error_total=1
iteraciones=0
max_iteraciones=100  # Para evitar bucles infinitos

while error_total>0 and iteraciones<max_iteraciones:
    error_total=0
    for patron in Tabla_bernoulli:
        x1, x2, d = patron
        x0=1 
        net=(w0*x0)+(w1*x1)+(w2*x2)
        salida=funcion(net)
        error=d-salida
        if error !=0:
            w0=w0+error*x0
            w1=w1+error*x1
            w2=w2+error*x2
            error_total=error_total+1
    iteraciones=iteraciones+1

# Verificación final
print("Resultado final:")
print("Numero de etapas",iteraciones,"Pesos finales: w0={w0}, w1={w1}, w2={w2}")
for patron in Tabla_bernoulli:
    x1, x2, d = patron
    x0=1 
    net=(w0*x0)+(w1*x1)+(w2*x2)
    salida=funcion(net)
    estado= "✓" if salida == d else "✗"
    print("Salida deseada se cumple: ", d, estado)

