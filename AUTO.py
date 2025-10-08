class Auto:
    def __init__(self, marca, modelo, año, color, tipo_combustible, precio):
        self.marca = marca
        self.modelo = modelo
        self.año = año
        self.color = color
        self.tipo_combustible = tipo_combustible
        self.precio = precio
    
    def __str__(self):
        return f"{self.marca} {self.modelo} ({self.año}) - Color: {self.color}, Combustible: {self.tipo_combustible}, Precio: ${self.precio}"
    
    def to_dict(self):
        return {
            'marca': self.marca,
            'modelo': self.modelo,
            'año': self.año,
            'color': self.color,
            'tipo_combustible': self.tipo_combustible,
            'precio': self.precio}

auto1 = Auto("Toyota", "Corolla", 2022, "Blanco", "Gasolina", 25000)
auto2 = Auto("Honda", "Civic", 2023, "Gris", "Híbrido", 28000)
auto3 = Auto("Ford", "Mustang", 2021, "Rojo", "Gasolina", 45000)
auto4 = Auto("Tesla", "Model 3", 2023, "Negro", "Eléctrico", 42000)
auto5 = Auto("Nissan", "Sentra", 2022, "Azul", "Gasolina", 22000)

autos = [auto1, auto2, auto3, auto4, auto5]

if __name__ == "__main__":
    for auto in autos:
        print(auto)