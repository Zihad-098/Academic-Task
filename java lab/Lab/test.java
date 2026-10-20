

class  Student {
    int weight , height , depth ;
    void checkMethod (){
        System.out.println("Volume is : "+(weight * height * depth));
    }
}

public class test {
    public static void main(String[] args) {
        Student s = new Student();
        s.depth= 10;
        s.height=15;
        s.weight=14 ;
        s.checkMethod();

    }
}
