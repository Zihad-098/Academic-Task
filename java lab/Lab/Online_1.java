class  Actor {
    String name ;
    int age ; 

    public Actor(String name , int age ) {
        this.name = name ;
        this.age = age ;
        System.out.println("name and age is init");
    }

    public Actor(String name ) {
        this.name = name ;
        System.out.println("Name is init");
    }

    public Actor() {
        System.out.println("Nothing to show");
    }
    
    
    void increaseAge (int a ){
        age = age + a ;
    }
    
}


public class Online_1 {
    public static void main(String[] args) {
        Actor a = new Actor("anika", 21);
        Actor a1 = new Actor();
        Actor a2 = new Actor("Zihad");
    }
    
}
