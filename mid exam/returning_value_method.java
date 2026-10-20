class Box {
    int height , defth , length ;
    
    double volume  () {
        return height*defth*length ;
    }
}

public class returning_value_method {
    public static void main(String[] args) {
        Box b1 = new Box() ;
        Box b2 = new Box() ;

        b1.defth = 1 ;
        b1.height = 10 ;
        b1.length = 12 ;
        double vol ; 
        vol = b1.volume () ;
        System.out.println("vol is 1 : "+vol);

        b2.defth = 14 ;
        b2.height= 12 ;
        b2.length = 10 ;
        vol = b2.volume() ; 
        System.out.println("vol is 2 : "+vol );
    }
    
}
