class  Box {
     
    int weight , height , length ; 

}


public class two_object {
    public static void main(String[] args) {
        Box b1 = new Box() ;
        Box b2 = new Box() ;

        double vol ;
        b1.height = 14 ;
        b1.length = 15 ;
        b1.weight = 10 ;

        vol = b1.height*b1.length*b1.weight ;
        System.out.println("1st object volume is : "+vol);

        b2.height = 14 ;
        b2.length = 20 ;
        b2.weight = 7 ;
        vol = b2.height*b2.length*b2.weight ;
        System.out.println("2nd object volume is : "+vol);
        
    }
    
}
