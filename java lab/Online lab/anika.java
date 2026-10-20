abstract class Bike
{ 
    int limit=30;
Bike( )
{ System.out.println("constructor is invoked"); }
void getDetails() {
System.out.println("it has two wheels"); }
abstract void run();
}
class Honda extends Bike{
void run(){ System.out.println("running safely.."); }
}   

public class anika {
    public static void main(String[] args) {
        Bike obj = new Honda();
        obj.run();
        obj.getDetails();
        System.out.println(obj.limit); }
}
    

