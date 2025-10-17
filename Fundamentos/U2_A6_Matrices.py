import numpy as np

def solicitar_dimensiones():
    
    print("=== CONFIGURACIÓN DE DIMENSIONES ===")
    filas_A = int(input("Filas de la matriz A: "))
    columnas_A = int(input("Columnas de la matriz A: "))
    filas_B = int(input("Filas de la matriz B: "))
    columnas_B = int(input("Columnas de la matriz B: "))
    
    return filas_A, columnas_A, filas_B, columnas_B

def crear_matriz_vacia(filas, columnas, nombre):
    
    return [[0.0 for _ in range(columnas)] for _ in range(filas)]

def llenar_matriz_datos(matriz, nombre):

    print(f"\n=== INGRESO DE DATOS - MATRIZ {nombre} ===")
    for i in range(len(matriz)):
        for j in range(len(matriz[0])):
            matriz[i][j] = float(input(f"Elemento [{i+1},{j+1}]: "))
    return matriz

def multiplicar_matrices(matriz_A, matriz_B):
   
    filas_A = len(matriz_A)
    columnas_A = len(matriz_A[0])
    columnas_B = len(matriz_B[0])
    
    resultado = crear_matriz_vacia(filas_A, columnas_B, "Resultado")
    
    for fila_actual in range(filas_A):
        for columna_actual in range(columnas_B):
            suma_productos = 0.0
            for indice_comun in range(columnas_A):
                suma_productos += matriz_A[fila_actual][indice_comun] * matriz_B[indice_comun][columna_actual]
            resultado[fila_actual][columna_actual] = suma_productos
    
    return resultado

def mostrar_matriz(matriz, nombre):
 
    print(f"\n=== MATRIZ {nombre} ===")
    for fila in matriz:
        print("[", end="")
        for j, elemento in enumerate(fila):
            print(f"{elemento:8.2f}", end="")
            if j < len(fila) - 1:
                print(", ", end="")
        print(" ]")

def main():
    
    try:
   
        filas_A, columnas_A, filas_B, columnas_B = solicitar_dimensiones()
        
        if columnas_A != filas_B:
            print("\n❌ ERROR: No se pueden multiplicar las matrices")
            print(f"   Las columnas de A ({columnas_A}) deben ser iguales a las filas de B ({filas_B})")
            return
    
        matriz_A = crear_matriz_vacia(filas_A, columnas_A, "A")
        matriz_A = llenar_matriz_datos(matriz_A, "A")
        
        matriz_B = crear_matriz_vacia(filas_B, columnas_B, "B")
        matriz_B = llenar_matriz_datos(matriz_B, "B")
        
       
        matriz_resultado = multiplicar_matrices(matriz_A, matriz_B)
        
     
        print("\n✅ Multiplicación realizada con éxito")
        mostrar_matriz(matriz_A, "A")
        mostrar_matriz(matriz_B, "B")
        mostrar_matriz(matriz_resultado, "RESULTADO")
        
    except ValueError:
        print("\n❌ Error: Por favor ingrese valores numéricos válidos")
    except Exception as e:
        print(f"\n❌ Error inesperado: {e}")

if __name__ == "__main__":
    main()