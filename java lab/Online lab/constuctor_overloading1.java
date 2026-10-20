class  Actor {
    String name ; 
    int age ;
    public Actor (String name , int age ){
        this.name = name ;
        this.age = age ;
    }

    void increaseAge (int a){
       age = age + a ;
    }
    void increaseAge (String name ){
        System.out.println("Not possible");
    }
    void increaseAge (int a  , int b ){
        age = age + a + b ;
    }
    void increaseAge (){
        age = age + 1 ;
    }
}

public class constuctor_overloading1 {
    public static void main(String[] args) {
        Actor a = new Actor("anika", 21);

        a.increaseAge(5);  
        System.out.println(a.age);
        a.increaseAge("Zihad");             
        a.increaseAge(5, 6);
        System.out.println(a.age);
        a.increaseAge();
        System.out.println(a.age);
    }
    
}
