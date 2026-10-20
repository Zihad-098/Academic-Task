class Student {
    String name  ;
    String id ;
    double cgpa ;
    int age  ;

    // method overloading 
    void calcAverage (){
        System.out.println("Nothing to be done ");
    }
    void calcAverage (int a){
        System.out.println("Average is : "+a);
    }
    void calcAverage (String  a){
        System.out.println("Please enter valid number ");
    }
    void calcAverage (int a , int b){
        double avg = (a+b)/2 ;
        System.out.println("average is : "+avg);
    }
    void calcAverage (int a , int b , int c ){
        double  avg = (a+b+c) / 3 ;
        System.out.println("average is : "+avg);
    }

}

public class labtwo1 {
    public static void main(String[] args) {
        Student s= new Student();
        s.calcAverage();
        s.calcAverage("hh");
        s.calcAverage(5);
        s.calcAverage(10,5);
        s.calcAverage(14,5,7); 
    } 
}
