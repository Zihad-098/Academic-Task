class  boxDemo {
    int height , weight , length ;

    void  checkBox () {
        //System.out.println("volume is ");
        System.out.println("vloume is : "+(weight * length * height));
    }
}

public class method {
   public static void main(String[] args) {
    boxDemo b1 = new boxDemo() ;
    boxDemo b2 = new boxDemo() ;

    b1.height = 14 ;
    b1.length = 15 ;
    b1.weight = 10 ;
    b1.checkBox(); 

    b2.height = 14 ;
    b2.length = 15 ;
    b2.weight = 16 ;
    b2.checkBox(); 

   }

    
}
