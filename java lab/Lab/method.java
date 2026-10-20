class Student {
    String name ;
    String gender ;
    int age ;
    int phone ;

    void studenInfo (){
        System.out.println("name : " +name);
        System.out.println("gender : " +gender);
        System.out.println("age : " +age);
        System.out.println("phone : " +phone);
        System.out.println("\n");


    }
}

public class method {
   public static void main(String[] args) {
    Student s1 = new Student();
    s1.name = "Zihad" ;
    s1.gender = "male" ;
    s1.age = 22 ;
    s1.phone = 1609443173;

    s1.studenInfo();

    Student s2 = new Student() ;
    s2.name = "rashi" ;
    s2.gender = "female" ;
    s2.age = 25;
    s2.phone = 156891;

    s2.studenInfo(); 

       
   } 
}
