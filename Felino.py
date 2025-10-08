class Felino:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad
    
    def comer(self):
        print(f"{self.nombre} está comiendo")
    
    def dormir(self):
        print(f"{self.nombre} está durmiendo")

class Gato(Felino):
    def __init__(self, nombre, edad, raza):
        super().__init__(nombre, edad)
        self.raza = raza
    
    def maullar(self):
        print(f"{self.nombre} dice: Miau!")
    
    def jugar(self):
        print(f"{self.nombre} está jugando")

if __name__ == "__main__":
    mi_gato = Gato("Luna", 3, "Persa")
    
    mi_gato.maullar()
    mi_gato.comer()
    mi_gato.jugar()
    mi_gato.dormir()
    
    print(f"Nombre: {mi_gato.nombre}")
    print(f"Edad: {mi_gato.edad} años")
    print(f"Raza: {mi_gato.raza}")