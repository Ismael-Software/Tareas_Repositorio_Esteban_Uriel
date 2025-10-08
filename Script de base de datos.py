import sqlite3
from AUTO import autos

def crear_base_datos():
    conexion = sqlite3.connect('flota_autos.db')
    cursor = conexion.cursor()
    
    cursor.execute('''
        CREATE TABLE IF NOT EXISTS autos (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            marca TEXT NOT NULL,
            modelo TEXT NOT NULL,
            año INTEGER NOT NULL,
            color TEXT NOT NULL,
            tipo_combustible TEXT NOT NULL,
            precio REAL NOT NULL
        )
    ''')
    for auto in autos:
        cursor.execute('''
            INSERT INTO autos (marca, modelo, año, color, tipo_combustible, precio)
            VALUES (?, ?, ?, ?, ?, ?)
        ''', (auto.marca, auto.modelo, auto.año, auto.color, auto.tipo_combustible, auto.precio))
    
    conexion.commit()
    cursor.execute('SELECT * FROM autos')
    registros = cursor.fetchall()
    print("Registros en la base de datos:")
    for registro in registros:
        print(registro)
        
    conexion.close()

if __name__ == "__main__":
    crear_base_datos()