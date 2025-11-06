#Diccionarios

#¿Que es un diccionario? R= Los diccionarios se utilizan para almacenar valores de datos en pares clave:valor.
#Un diccionario es una colección ordenada*, modificable y que no permite duplicados.

#¿En que caso es conveniente usarlo? R= Cuando se necesita una asociación clara entre una clave y un valor, 
#como en el caso de almacenar información de contacto (nombre y número de teléfono) o cuando se requiere un acceso rápido a los datos mediante claves únicas.

#Sintaxis para crear un diccionario:
#   thisdict = {
#     "brand": "Ford",
#     "model": "Mustang",
#     "year": 1964
#   }

#Ejemplo de uso:
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
print(thisdict["brand"], thisdict["model"], thisdict["year"])