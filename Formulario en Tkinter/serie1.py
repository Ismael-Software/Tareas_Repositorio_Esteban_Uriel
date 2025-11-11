# serie1.py
import tkinter as tk
from operaciones import serie1

def formulario_serie1():
    ventana = tk.Toplevel()
    ventana.title("Serie 1 - Suma de números naturales")

    tk.Label(ventana, text="Ingrese n:").pack()
    entrada = tk.Entry(ventana)
    entrada.pack()

    resultado = tk.Label(ventana, text="")
    resultado.pack()

    def calcular():
        try:
            n = int(entrada.get())
            r = serie1(n)
            resultado.config(text=f"Resultado: {r}")
        except:
            resultado.config(text="Error: ingrese un número válido")

    tk.Button(ventana, text="Calcular", command=calcular).pack()
