class Student {
    String name ;
    String gender ;
    int number ;

    void setInfo (String a , String b ,int c){
        name = a ;
        gender = b ;
        number = c ;
    }

    void displayInformation (){
        System.out.println("name : "+name);
        System.out.println("gender : "+gender);
        System.out.println("number : "+number);
        System.out.println("\n\n");
    }
}

public class perameter_method {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.setInfo("Zihad", "male", 22);
        s1.displayInformation();
        
        Student s2 = new Student();
        s2.setInfo("messi", "male", 37);
        s2.displayInformation();
    }
}