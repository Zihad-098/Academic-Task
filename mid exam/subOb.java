class vehicle {

    public vehicle() {
        System.out.println("vehicle is created ");
    }
    
}

class  Bike extends vehicle {

    public Bike() {
        super();
        System.out.println("Bike is created");
    }
    
}


public class subOb {
    public static void main(String[] args) {
       // vehicle a1 = new vehicle();
        Bike b1 = new Bike();

        
    }
}
