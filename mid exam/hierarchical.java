class  A {
    void methodA () {
        System.out.println("method of class A");
    }
}
class B extends A {
    void methodB (){
        System.out.println("method of class B");
    }
}
class C extends  A {
    void methodC (){
        System.out.println("method of class C ");
    }
}
public class hierarchical {
    public static void main(String[] args) {
        B b1 = new B() ;
        b1.methodA();
        b1.methodB(); 
        C b2 = new C() ;
        b2.methodC();
        
    }
}