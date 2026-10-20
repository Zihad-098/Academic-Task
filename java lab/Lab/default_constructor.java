
class Student  {
    String name ;
    String gender ;
    int age ;

    Student (){
        System.out.println("hello default constructor ");
    }

    public Student(String a, String b, int c) {
        name = a;
        gender = b ;
        age = c ;
    }
    void checkInfo (){

        System.out.println("name : "+name);
        System.out.println("gender : "+gender);
        System.out.println("Age : "+age);

    }
    
}

public class default_constructor {
    public static void main(String[] args) {
        Student s1 = new Student("zihad","male",22);
        s1.checkInfo();
        
        // Student s2 = new Student();
        // s2.checkInfo();

        Student s3 = new Student();
        // s3.name = "Zihad" ;
        // System.out.println(s3.name); 
    }
}
