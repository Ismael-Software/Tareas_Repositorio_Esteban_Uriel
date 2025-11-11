# serie3.py
import tkinter as tk
from operaciones import serie3

def formulario_serie3():
    ventana = tk.Toplevel()
    ventana.title("Serie 3 - Suma de factoriales")

    tk.Label(ventana, text="Ingrese n:").pack()
    entrada = tk.Entry(ventana)
    entrada.pack()

    resultado = tk.Label(ventana, text="")
    resultado.pack()

    def calcular():
        try:
            n = int(entrada.get())
            r = serie3(n)
            resultado.config(text=f"Resultado: {r}")
        except:
            resultado.config(text="Error: ingrese un número válido")

    tk.Button(ventana, text="Calcular", command=calcular).pack()
