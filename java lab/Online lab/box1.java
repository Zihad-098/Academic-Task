class Box {
    double width ;
    double height ;
    double depth ;
}

public class box1 {
    public static void main(String[] args) {
        Box myBox1 = new Box() ;
        Box myBox2 = new Box() ;
        myBox1.height = 10 ;
        myBox1.width = 12 ;
        myBox1.depth = 5 ;

        double vol ;
        vol = myBox1.width*myBox1.height*myBox1.depth ;
        System.out.println("MyBox1 output : "+vol);
        myBox2.width = 15 ;
        myBox2.height = 10 ;
        myBox2.depth = 8 ;
        vol = myBox2.width*myBox2.height*myBox2.depth ;
        System.out.println("MyBox2 output : "+vol);
        

    }
}
