class LibraryItem {

    void displayDetails (){
        System.out.println("welcome to our library !!!");
    }
}

class  Book extends  LibraryItem {
    String author  ;
    int page ; 

    public Book(String author , int page ) {
        this.author = author ; 
        this.page = page ;
    }

    @Override
    void displayDetails() {
        super.displayDetails();
        System.out.println("writter by : "+author);
        System.out.println("page is : "+page );
    }
    
    
}

public class q6 {
    public static void main(String[] args) {
        Book b1 = new Book("anika firose ", 100) ;
        b1.displayDetails();
    }
}
