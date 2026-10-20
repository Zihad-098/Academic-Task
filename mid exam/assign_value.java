class  Box {
    int weight , length , height ;

}

public class assign_value {
    public static void main(String[] args) {
        Box b1 = new Box() ;
        Box b2 = b1 ;

        double volume ; 
        b1.height = 10 ;
        b1.length = 14 ;
        b1.weight = 15 ;
         volume = b1.height * b1.length * b1.weight ;
         System.out.println("volume is : "+volume);

        volume = b2.height *b2.length  *b2.weight ;
        System.out.println("volume 2 is : "+volume);
         

        
    }
}
