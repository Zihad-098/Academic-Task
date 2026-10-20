
class  Student {
    String name , gender ; 
     
    int age ;
    double cgpa ;

     Student(String a , String b ,  double d ) {

        name = a ;
        gender = b ;
        //age = c ;
        cgpa = d ;
    }

    void setAge (int h){
        age = h ;
    }
    
    void infoCheck (){
        System.out.println("name : "+name);
        System.out.println("gender : "+gender);
        System.out.println("cgpa : "+cgpa);
        System.out.println("\n\n");
    }
    void checkResult (){
        System.out.println("Result : ");
        if (cgpa > 3.50){
            System.out.println("Excellent ");
        }
        else {
            System.out.println("Good");
        }
    }

    void ageCheck (){
        System.out.println("Age : ");
        if (age > 30){
            System.out.println("Buira");
        }
        else {
            System.out.println("jowan");
        }
    }
}

public class practice {
    public static void main(String[] args) {
        Student s1=new Student( "Zihad", "male",3.50);
        Student s2 = new Student ("rahim","male",3.99);

        s1.infoCheck();
        s2.infoCheck();
        s2.setAge(35);
        s2.ageCheck();

        s2.checkResult();
    }
    
}
