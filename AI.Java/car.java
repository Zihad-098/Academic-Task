
import java.util.Scanner;

public class car {
    
    String brand  ;
    String model ;
    int mileage ;
    int year ;

    car (String brand , String model , int mileage , int year ){

        this.brand = brand ;
        this.model = model ;
        this.mileage = mileage ;
        this.year = year ;
    }
    void displayCarInfo (){
        System.out.println("brand : "+brand );
        System.out.println("model : "+model);
        System.out.println("mileage : "+mileage);
        System.out.println("year : "+year);
    }
    void ClassicCar (){
        Scanner ob = new Scanner (System.in) ;
        int CurrentYear = ob.nextInt();
        if ((CurrentYear - year)>=25){
            System.out.println("classicCar");
        }
        else {
            System.out.println("Not a classic car");
        }
    }

   
   
    public static void main(String[] args) {
        car s1 = new car ("bmw","mustang",12000,1995);
        System.out.println("Car 1 : ");
        s1.displayCarInfo();
        s1.ClassicCar();

        car s2 = new car("toyata", "veloz", 13000, 2015);
        System.out.println("Car 2 :");
        s2.displayCarInfo();
        s2.ClassicCar();
        

    }
}