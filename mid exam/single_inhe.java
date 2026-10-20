class  A {
    void methodA (){
        System.out.println("method is calling ");
    }
}

class  B extends A {
    void methodB (){
        System.out.println("method b is calling ");
    }
}

public class single_inhe {
    public static void main(String[] args) {
        B b1 = new B();
        b1.methodA();
        b1.methodB();
    }
}
