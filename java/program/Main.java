import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        // Membuat daftar Author
        ArrayList<Author> authors = new ArrayList<>();
        authors.add(new Author("JK Rowling", "Inggris"));
        authors.add(new Author("Dudul", "Bandung"));
        authors.add(new Author("Jostein Gaarder", "Norwegia"));

        // Membuat daftar Publisher
        ArrayList<Publisher> publishers = new ArrayList<>();
        publishers.add(new Publisher("Bloomsberry", "London"));
        publishers.add(new Publisher("Gramedia", "Jakarta"));

        // Membuat daftar PrintedBook
        ArrayList<PrintedBook> printedBooks = new ArrayList<>();
        ArrayList<Author> hpAuthors = new ArrayList<>();
        hpAuthors.add(authors.get(0)); // JK Rowling
        hpAuthors.add(authors.get(1)); // Dudul
        printedBooks.add(new PrintedBook("Harry Potter 1", hpAuthors, publishers.get(0), "1023192031", 200, "Paperback"));

        ArrayList<Author> hpAuthors2 = new ArrayList<>();
        hpAuthors2.add(authors.get(0)); // JK Rowling
        printedBooks.add(new PrintedBook("Harry Potter 2", hpAuthors2, publishers.get(0), "1023192032", 301, "Hardcover"));

        // Membuat daftar AudioBook
        ArrayList<AudioBook> audioBooks = new ArrayList<>();
        ArrayList<Author> sophieAuthors = new ArrayList<>();
        sophieAuthors.add(authors.get(2)); // Jostein Gaarder
        audioBooks.add(new AudioBook("Dunia Shopie", sophieAuthors, publishers.get(1), "1023192041", "PlayboiCarti", 120, 10, "MP4"));

        ArrayList<Author> puppetersAuthors = new ArrayList<>();
        puppetersAuthors.add(authors.get(2)); // Jostein Gaarder
        audioBooks.add(new AudioBook("The Puppeters", puppetersAuthors, publishers.get(1), "1023192042", "PlayboiCarti", 150, 12, "MKV"));

        // Cetak Printed Books
        System.out.println("Data Buku Cetak");
        int count = 1;
        for (PrintedBook book : printedBooks) {
            System.out.print(count++ + ".) " + book.getTitle() + " | ");

            // Kelas Author
            System.out.print("(");
            for (int i = 0; i < book.getAuthor().size(); i++) {
                System.out.print(book.getAuthor().get(i).getName() + " - " + book.getAuthor().get(i).getNationality());
                if (i < book.getAuthor().size() - 1) {
                    System.out.print(", ");
                }
            }
            System.out.print(") | ");

            // Kelas Publisher
            System.out.print(book.getPublisher().getName() + " | " + book.getPublisher().getAddress() + " | ");

            System.out.println(book.getISBN() + " | " + book.getPageCount() + " halaman | " + book.getCoverType());
        }

        // Cetak Audio Books
        System.out.println("\nData Audio Books");
        count = 1;
        for (AudioBook book : audioBooks) {
            System.out.print(count++ + ".) " + book.getTitle() + " | ");

            // Kelas Author
            for (Author author : book.getAuthor()) {
                System.out.print(author.getName() + " | " + author.getNationality() + " | ");
            }

            // Kelas Publisher
            System.out.print(book.getPublisher().getName() + " | " + book.getPublisher().getAddress() + " | ");

            System.out.print(book.getSpeaker() + " | " + book.getDuration() + " menit | ");
            System.out.println(book.getISBN() + " | " + book.getFileSize() + " mb | " + book.getFormat());
        }
    }
}
