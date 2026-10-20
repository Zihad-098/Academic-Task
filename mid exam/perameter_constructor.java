class  Box {
    int height , defth , length ;

    public Box(int a , int b , int c) {
        height = a ;
        defth = b ;
        length = c ;
    }
    double volume (){
        return  height*defth*length;
    }
    
}

public class perameter_constructor {
    public static void main(String[] args) {
        Box b1 = new Box(10, 20, 30);
        Box b2 = new Box(14, 15, 12) ; 
        double vol ;
        vol = b1.volume();
        System.out.println("b1 is : "+vol);
        vol = b2.volume() ;
        System.out.println("b2 is : "+vol);

    }
}
