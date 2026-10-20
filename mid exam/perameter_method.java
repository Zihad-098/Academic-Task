class  Student {
    int height , defth , length ;

    double volume (){
        return defth*height*length;
    }

    void  setIn (int a , int b , int c){
        height = a ;
        defth = b ;
        length = c ;
    }
}

public  class  perameter_method {
    public static void main(String[] args) {
        Student b1 = new Student() ;
        b1.setIn(50, 10, 14);
        double vol = b1.volume() ;
        System.out.println("volume is :"+vol); 
    }
}