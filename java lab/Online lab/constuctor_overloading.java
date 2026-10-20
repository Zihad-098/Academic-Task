
// constructor overloading 
class Actor {
    String name ;
    int age ;

    public Actor(String name , int age ) {
        this.name = name ;
        this.age = age ;
        System.out.println("name and age is init ");
    }

    public Actor(String name) {
        this.name = name ;
        System.out.println("name is init");
    }

    public Actor() {
        System.out.println("Nothing to show");
    }
}

public class constuctor_overloading {
    public static void main(String[] args) {
        Actor a = new Actor("anika",21);
        Actor a1 = new Actor("Zihad");
        Actor a2 = new Actor();
    }
    
}
