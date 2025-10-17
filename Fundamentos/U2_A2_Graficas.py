import numpy as np
import matplotlib.pyplot as plt

print("=== GRAFICADOR DE FUNCIONES LINEALES ===")

while True:
    opcion = input("\n¿Ingresar valores manualmente (m) o generarlos automáticamente (a)?: ")
    
    if opcion == "m":
        entrada = input("Ingresa los valores de x separados por comas: ")
        x = np.array([float(num) for num in entrada.split(",")])
    else:
        x = np.linspace(-15, 15, 50)
    
    print("\nFunción lineal: y = m*x + b")
    try:
        m = float(input("Ingresa el valor de m (pendiente): "))
        b = float(input("Ingresa el valor de b (intercepto): "))
    except:
        print("Error: Ingresa valores numéricos válidos")
        continue
    y = m * x + b
    
    plt.plot(x, y, linewidth=2, label=f"y = {m}x + {b}")
    plt.xlabel("Eje x")
    plt.ylabel("Eje y")
    plt.title(f"Gráfica de y = {m}x + {b}")
    plt.grid(True)
    plt.legend()
    plt.show()
  
    repetir = input("\n¿Deseas crear otra gráfica? (s/n): ")
    if repetir.lower() != "s":
        print("Programa terminado. ¡Hasta pronto!")
        break