class Animal:
    def __init__(self, nombre, edad, sonido):
        self.nombre = nombre
        self.edad = edad
        self.sonido = sonido

    def comer(self):
        print(f"{self.nombre} está comiendo.")

    def dormir(self):
        print(f"{self.nombre} está durmiendo.")

    def hacer_sonido(self):
        print(f"{self.nombre} hace: {self.sonido}")

class Ave(Animal):
    def __init__(self, nombre, edad, sonido, tipo_ave, puede_volar):
        super().__init__(nombre, edad, sonido)
        self.tipo_ave = tipo_ave
        self.puede_volar = puede_volar

    def volar(self):
        if self.puede_volar:
            print(f"{self.nombre} está volando.")
        else:
            print(f"{self.nombre} no puede volar.")

    def poner_huevo(self):
        print(f"{self.nombre} ha puesto un huevo.")

class Felino(Animal):
    def __init__(self, nombre, edad, sonido, raza, color):
        super().__init__(nombre, edad, sonido)
        self.raza = raza
        self.color = color

    def cazar(self):
        print(f"{self.nombre} está cazando.")

    def ronronear(self):
        print(f"{self.nombre} está ronroneando.")

class Canino(Animal):
    def __init__(self, nombre, edad, sonido, raza, tamano):
        super().__init__(nombre, edad, sonido)
        self.raza = raza
        self.tamano = tamano

    def ladrar(self):
        print(f"{self.nombre} está ladrando fuerte.")

    def olfatear(self):
        print(f"{self.nombre} está olfateando algo.")

felino1 = Felino("Luna", 3, "Miau", "Persa", "Blanco")
felino2 = Felino("Simba", 5, "Grrr", "Bengala", "Naranja")
felino3 = Felino("Nala", 2, "Miau", "Siamés", "Gris")

canino1 = Canino("Mila", 4, "Guau", "Labrador", "Grande")
canino2 = Canino("Winnie", 3, "Guau", "Poodle", "Mediano")
canino3 = Canino("Cloy", 2, "Guau", "Chihuahua", "Pequeño")

ave1 = Ave("Piolín", 1, "Pío", "Canario", True)
ave2 = Ave("Loro", 5, "Hola", "Amazona", True)
ave3 = Ave("Pingüino", 4, "Grra", "Emperador", False)

felino1.cazar()
canino2.ladrar()
ave3.volar()