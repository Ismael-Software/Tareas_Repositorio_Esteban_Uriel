public class Persona {
    String nombre;
    String apaterno;
    int edad;

     Persona(String nombre, String apaterno, int edad) {
        this.nombre=nombre;
        this.apaterno=apaterno;
        this.edad=edad;}

    void saludar(){
        System.out.println("Hola "+this.nombre+this.apaterno);}

    void comer(){
        System.out.println(this.nombre+" esta comiendo");}

    void mostrarInfo(){
        System.out.println("Nombre "+this.nombre+"Apellido Paterno "+this.apaterno+" Edad "+this.edad);}

    static void main(String[] args) {
        Persona profesor=new Persona("Juan", "Perez", 45);
        Persona alumno=new Persona("Luis", "Lopez", 20);

        profesor.saludar();
        alumno.saludar();}
