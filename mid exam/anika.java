class MyClass {
    // No extends keyword, but it automatically extends Object
}

public class anika {
    public static void main(String[] args) {
        MyClass obj = new MyClass();
        System.out.println(obj.toString());  // This works because MyClass extends Object
    }
}
