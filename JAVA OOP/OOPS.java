class Student {
    String name ;
    int age ;
    public void printInfo (){
        System.out.println(this.name);
        System.out.println(this.age);
    }

    Student (String name , int age ){ // constructor 
        this.name = name ;
        this.age = age ;
    }

}
 
public class OOPS {
    public static void main(String[] args) {
        Student s1 = new Student("Zihad",22);
        
        s1.printInfo();
    }
}
