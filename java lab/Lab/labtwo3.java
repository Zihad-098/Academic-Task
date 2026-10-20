
class Student {
    String name ; 
    String id ; 
    double cgpa ;
    int age ;

    public Student() {
    }

    
    public Student(String name , String id , double cgpa) {
        this.name = name ;
        this.id = id ;
        this.cgpa=cgpa ;

    }
    void calcAverage (){
        System.out.println("Nothing to be done ");
    }

    
}

class GradStudent extends Student {
    int salary ;
    GradStudent (String name , String id , double cgpa , int salary){
        super(name , id ,cgpa) ;
        this.salary= salary ;
        //super.calcAverage(40, 50);
        super.name = name ;
    }
    void calcAverage (){
       for (int i=0;i<10;i++){
        System.out.println("Nothing to be done ");
       }
    }
    void GradStudentInfo (){
        System.out.println("name "+name);
        System.out.println("id "+id);
        System.out.println("cgpa "+cgpa);
        System.out.println("salary  "+salary);
    }
    
}

public class labtwo3 {
    public static void main(String[] args) {
        GradStudent gs = new GradStudent("anika","098", 4.00, 10);
        gs.calcAverage(45, 50);
        gs.GradStudentInfo();  
    }
}
