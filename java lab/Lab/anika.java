class  shape {
    double area (){
        return 0 ; 
    }
}
class ciricle extends  shape {
    double firose ;

     ciricle (double firose  ){
        this.firose = firose  ;
    }
    double area () {
        return  Math.PI*firose*firose ;
    }
    void zihad (){
        System.out.println("we are beginer !!!!!!!");
    }
}

public class anika {
    public  static void main (String[] arg){
        ciricle a = new ciricle(10);
        System.out.println("Area is "+a.area());
        a.zihad();
    }
}
