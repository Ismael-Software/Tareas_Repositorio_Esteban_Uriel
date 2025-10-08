public class Persona {
    private String nombre;
    private String apaterno;
    private int edad;
    
    public Persona(String nombre, String apaterno, int edad) {
        this.nombre = nombre;
        this.apaterno = apaterno;
        this.edad = edad;
    }

    public void saludar() {
        System.out.println("Hola " + this.nombre + " " + this.apaterno);
    }
    
    public void comer() {
        System.out.println(this.nombre + " esta comiendo");
    }
    
    public void mostrarInfo() {
        System.out.println("Nombre: " + this.nombre + " | Apellido Paterno: " + this.apaterno + " | Edad: " + this.edad);
    }

    public static void main(String[] args) {
        Persona profesor = new Persona("Juan", "Perez", 45);
        Persona alumno = new Persona("Luis", "Lopez", 20);
        
        profesor.saludar();
        alumno.saludar();
        
        profesor.mostrarInfo();
        alumno.mostrarInfo();
    }
}