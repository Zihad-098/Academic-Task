class Student {
    String name ; 
    String gender ;
    int age ;
    double cgpa ;

    public Student(String a , String b , int c) {

        name = a;
        gender = b ;
        age = c ;
    }

    void studentInfo (){
        System.out.println("name "+name);
        System.out.println("gemder "+gender);
        System.out.println("age "+age);
    }

    void ageCheck (){
        if (age > 30){
            System.out.println("buira");
        }
        else {
            System.out.println("jowan");
        }
    }

    void setCgpa (double d){
        cgpa = d ;
    }

    void cgpaCheck (){
        if (cgpa > 2.99){
            System.out.println("Excellent");
        }
        else {
            System.out.println("Very bad");
        }
        System.out.println("\n\n");
    }
       
}

public class practice {

    public static void main (String [] args){
        Student s1 = new Student("Zihad", "male", 22);
        Student s2 = new Student("Anika ", "female ", 16);

        s1.studentInfo();
        s1.ageCheck();
        s1.setCgpa(3.99);
        s1.cgpaCheck();

        s2.studentInfo();
        s2.ageCheck();
        s2.setCgpa(2.50);
        s2.cgpaCheck();
    }
}