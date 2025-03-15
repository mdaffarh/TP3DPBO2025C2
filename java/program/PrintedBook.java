import java.util.ArrayList;

public class PrintedBook extends Book {
    private int pageCount;
    private String coverType;

    // constructor dengan parameter
    PrintedBook(String title, ArrayList<Author> authorList, Publisher publisher, String ISBN, int pageCount, String coverType) {
        super(title, authorList, publisher, ISBN);
        this.pageCount = pageCount;
        this.coverType = coverType;
    }

    // getter dan setter untuk pageCount
    public void setPageCount(int pageCount) {
        this.pageCount = pageCount;
    }

    public int getPageCount() {
        return pageCount;
    }

    // getter dan setter untuk coverType
    public void setCoverType(String coverType) {
        this.coverType = coverType;
    }

    public String getCoverType() {
        return coverType;
    }
}
