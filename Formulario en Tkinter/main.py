# main.py
import tkinter as tk
from serie1 import formulario_serie1
from serie2 import formulario_serie2
from serie3 import formulario_serie3

ventana = tk.Tk()
ventana.title("Ejercicios - Series Matemáticas")
ventana.geometry("300x200")

tk.Label(ventana, text="Seleccione una serie:", font=("Arial", 12)).pack(pady=10)

tk.Button(ventana, text="Serie 1 - Naturales", command=formulario_serie1, width=25).pack(pady=5)
tk.Button(ventana, text="Serie 2 - Pares", command=formulario_serie2, width=25).pack(pady=5)
tk.Button(ventana, text="Serie 3 - Factoriales", command=formulario_serie3, width=25).pack(pady=5)

ventana.mainloop()
