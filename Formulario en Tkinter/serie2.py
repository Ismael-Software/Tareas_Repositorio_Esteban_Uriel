# serie2.py
import tkinter as tk
from operaciones import serie2

def formulario_serie2():
    ventana = tk.Toplevel()
    ventana.title("Serie 2 - Números pares")

    tk.Label(ventana, text="Ingrese n:").pack()
    entrada = tk.Entry(ventana)
    entrada.pack()

    resultado = tk.Label(ventana, text="")
    resultado.pack()

    def calcular():
        try:
            n = int(entrada.get())
            r = serie2(n)
            resultado.config(text=f"Resultado: {r}")
        except:
            resultado.config(text="Error: ingrese un número válido")

    tk.Button(ventana, text="Calcular", command=calcular).pack()
