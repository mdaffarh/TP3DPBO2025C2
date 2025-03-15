import java.util.ArrayList;

public class Book {
    // atribut-atribut private
    private String title;
    private ArrayList<Author> authorList;
    private Publisher publisher;
    private String ISBN;


    // constructor dengan parameter
    Book(String title, ArrayList<Author> authorList, Publisher publisher, String ISBN) {
        this.title = title;
        this.authorList = authorList;
        this.publisher = publisher;
        this.ISBN = ISBN;
    }

    // getter dan setter untuk title
    public void setTitle(String title) {
        this.title = title;
    }

    public String getTitle() {
        return title;
    }

    // getter dan setter untuk author
    void setAuthor(ArrayList<Author> authorList) {
        this.authorList = authorList;
    }

    ArrayList<Author> getAuthor() {
        return authorList;
    }

    // getter dan setter untuk publisher
    void setPublisher(Publisher publisher) {
        this.publisher = publisher;
    }

    Publisher getPublisher() {
        return publisher;
    }

    // getter dan setter untuk ISBN
    public void setISBN(String ISBN) {
        this.ISBN = ISBN;
    }

    public String getISBN() {
        return ISBN;
    }
}
