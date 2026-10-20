class Student {
    String name ;
    String gender ;
    int phone ;

    Student(String a , String b ,int c) {
        name = a ;
        gender = b ;
        phone = c ;
    }
    void studentInfo (){
        System.out.println("name : "+name);
        System.out.println("gender : "+gender);
        System.out.println("phone : "+phone);
    }

    
}

public class constructor {
    public static void main(String[] args) {
        Student s1  = new Student("Zihad","male",22);
        s1.studentInfo();
    }
}