
public class electricCar {
    String brand ;
    String model ;
    int year ; 
    int batteryCapacity ;
    int currentCharge ;

    void attributes (String a  , String b , int c , int d , int e ){
        brand = a;
        model = b ;
        year = c ;
        batteryCapacity = d ;
        currentCharge = e  ;
    }
    void displayCarInfo (){
        System.out.println("Brand : "+brand);
        System.out.println("model : "+model);
        System.out.println("year : "+year);
        System.out.println("batterCapacity : "+batteryCapacity);
        System.out.println("currentCharge : "+currentCharge);
    }
    void lowBattery (){


        if ((batteryCapacity - currentCharge )> 10){
            System.out.println("charge is high ");
        }
        else {
            System.out.println("charge is low ");
        }
    }

    public static void main(String[] args) {
        electricCar car1 = new electricCar();
        car1.attributes("toyota", "y",1995, 100, 80);
        electricCar car2 = new electricCar();
        car2.attributes("bmw", "z", 2002, 100, 90);

        System.out.println("Car 1 : ");
        car1.displayCarInfo();
        car1.lowBattery();

        System.out.println("car 2 : ");
        car2.displayCarInfo();
        car2.lowBattery();
    }
}

