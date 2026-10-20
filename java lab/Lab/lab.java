
import java.util.Scanner;

class Student {
    String name ;
    String gender ;
    int age ;
    double cgpa ;

    public Student() {
        System.out.println("hello anika ");
    }

    Student (String a , String b , int c , double d){

        name = a ;
        gender = b ;
        age = c ;
        cgpa = d  ;
    }
    void studenInfo (){
        System.out.println("name : "+name );
        System.out.println("gender : "+gender);
        System.out.println("age : "+age);
        System.out.println("cgpa : "+cgpa);
        
    }
    void setCgpa (double h){
        cgpa = h ;
    }
    void cgpaCheck (){
        if (cgpa > 2.50){
            System.out.println("good");
        }
        else {
            System.out.println("jani na");
        }
    }

}

public class lab {
   public static void main(String[] args) {

    Student s1 = new Student("zihad" , "male ",22,2.85);
    Student s2 = new Student("messi ","male" ,37,4.00);

    s1.studenInfo();
    s1.setCgpa(3.84);
    s1.cgpaCheck();

    Scanner ob = new Scanner(System.in);
    System.out.println("any number ");

    String name = ob.nextLine();
    System.out.println("name "+name );

    s1.name = "anika" ;
    s2.name = "firose" ;
 
   }
}
