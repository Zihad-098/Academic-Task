class  A {
    int a , b ;
    void showAB (){
        System.out.println("A and B : "+a+" "+b);
    }
}

class B extends A {
    //int a ;
    int c ; 
    void showC (){
        System.out.println("C is : "+c);
    }

    void  Sum () {
        // super.a = a ;
        // super.b = b ;

        System.out.println("Sum of A and B and C is : "+(a+b+c));
    }
}


public class single_inherit {
    public static void main(String[] args) {
    
        B subob = new B() ;

        subob.a=10;
        subob.b=14 ;
        subob.c=58;
        subob.showAB();
        subob.showC();
        subob.Sum();

       
        
    }
}

/*
  int a , b ;
   a=10 ;
  b= 10 ;
  b=a ;
  if (a==b){
   printf ("anika");
  }

*/ 
 