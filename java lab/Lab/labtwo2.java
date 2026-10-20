class  Student {
    String name ; 
    String id ;
    double cgpa ;
    int age ; 

    // constructor overloading 
     Student() {
        System.out.println("Nothing to be done ");
    }
    Student(String name ) {
        this.name = name ;
       // this.id = id ;
       for (int i=0;i<10;i++){
        System.out.println("Name : "+name);
       }
    }
    Student(String name , String id ) {

        this.name = name ;
        this.id = id ;
        for (int i=0;i<5;i++){
            System.out.println("name : "+name);
        }
        for (int i=0;i<5;i++){
            System.out.println("id : "+id);
        }
    }
    Student(String name , String id , double cgpa) {
        this.name = name ;
        this.id = id ;
        this.cgpa = cgpa ;
        this.cgpa=this.cgpa-0.5;
        System.out.println("cgpa : "+this.cgpa);

    }
    
}

public class labtwo2 {
    public static void main(String[] args) {
        Student s = new Student("hasan");
        Student s1 = new  Student("hasan", "098");
        Student s2 = new Student("hasan","098",4.0f);
    }
}
