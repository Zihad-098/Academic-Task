class  Box {
    int height , defth , length ;

    public Box() {
        height = 10 ;
        defth = 10 ;
        length = 10 ;
    }
    double volume (){
        return  height* length*defth ;
    }
    
}

public class constuctor {
    public static void main(String[] args) {
        Box b1 = new Box() ;
        Box b2 = new Box() ;
        double vol ;
        vol = b1.volume();
        System.out.println("volume is : "+vol);
        vol = b2.volume();
        System.out.println("volume is : "+vol);
        
    }
}
