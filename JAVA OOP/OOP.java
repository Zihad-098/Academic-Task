class Pen {
    String colour ;
    String types ;

    public void write (){
        System.out.println("writing something ");
    }

    public void printColour (){
        System.out.println(this.colour);
    }

    public void printTypes (){
        System.out.println(this.types);
    }
}



public class OOP {
    public static void main(String[] args) {
        Pen pen1 = new Pen ();
        pen1.colour = "Blue" ;
        pen1.types = "gel";

        Pen pen2 = new Pen();
        pen2.colour = "green" ;
        pen2.types = "ballpoint" ;

        pen1.printColour();
        pen1.printTypes();

        pen2.printColour();
        pen2.printTypes();

        pen2.write () ;

        

    }
}