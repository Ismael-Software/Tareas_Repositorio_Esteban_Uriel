class Felino {
    String nombre;
    int edad;
    
    public Felino(String nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
    }
    
    public void comer() {
        System.out.println(nombre + " está comiendo");
    }
    
    public void dormir() {
        System.out.println(nombre + " está durmiendo");
    }
}

class Gato extends Felino {
    String raza;
    
    public Gato(String nombre, int edad, String raza) {
        super(nombre, edad);
        this.raza = raza;
    }
    
    public void maullar() {
        System.out.println(nombre + " dice: Miau!");
    }
    
    public void jugar() {
        System.out.println(nombre + " está jugando");
    }
}

class Main {
    public static void main(String[] args) {
        Gato miGato = new Gato("Mimi", 2, "Electrico");
        
        miGato.maullar();
        miGato.comer();
        miGato.jugar();
        miGato.dormir();
        
        System.out.println("Nombre: " + miGato.nombre);
        System.out.println("Edad: " + miGato.edad + " años");
        System.out.println("Raza: " + miGato.raza);
    }
}