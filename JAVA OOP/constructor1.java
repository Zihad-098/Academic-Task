class Student {
    String name , gender ;
    int phone ;

    Student(String n , String g , int ph) {
        name = n ;
        gender = g ;
        phone = ph ;
    }

    
    public void printInfo (){
        System.out.println("name : "+name);
        System.out.println("gender : "+gender);
        System.out.println("phone : "+phone);
        System.out.println("\n\n");
    }
}

public class constructor1 {
    public static void main(String[] args) {
        Student st1 = new Student("Zihad","male",1609443173) ;

        st1.printInfo(); 
    }
}
