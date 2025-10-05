class persona:
	def __init__(self, nombre: str, apaterno: str, edad: int):
		self.nombre=nombre
		self.apaterno=apaterno
		self.edad=edad
	
	def saludar(self):
		print("Hola", (self.nombre), (self.apaterno))
	
	def comer(self):
		print((self.nombre), "esta comiendo")
		
	def mostrarInfo(self):
		print("Nombre ", (self.nombre), "Apellido Paterno",(self.apaterno),"Edad"(self.edad))
		
profesor=persona("Juan", "Perez", 45)
alumno=persona("Luis", "Lopez", 20)

profesor.saludar()
alumno.saludar()