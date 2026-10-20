
class Student {
    String name , gender  ;
    int age ;
    double cgpa ;

    public Student() {
        name = "anika" ;
        gender = "female" ;
        age = 21 ;
    }

    

    public Student(String a , String b , int c,double d ) { //constructor 
        name = a ;
        gender = b ; // reference variable 
        age = c ;
    }

    void studenInfo (){
        System.out.println("name : "+name);
        System.out.println("Gender : "+gender);
        System.out.println("Age : "+age);
        System.out.println("\n");
    }

    void ageCheck (){
        if (age > 30){
            System.out.println("Buira");
        }
        else {
            System.out.println("jowan");
        }
    }

    void setCgpa (double h){
        cgpa = h ;
    }
    void cgpaCheck (){
        if (cgpa > 3.99){
            System.out.println("Excellent");
        }
        else {
            System.out.println("Good");
        }
    }    

} 

public class labtwo {
    public  static void main (String [] args){

        Student s1 = new Student("Zihad", "male", 22,2.50);
        Student s2 = new Student("Messi", "male", 37,4.00);

        s1.studenInfo();
        s2.studenInfo();

        s1.ageCheck();
        s1.setCgpa(3.50);
        s1.cgpaCheck();
    }
}
