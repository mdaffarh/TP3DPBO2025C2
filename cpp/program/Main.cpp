#include <bits/stdc++.h>
#include "Author.cpp"
#include "Publisher.cpp"
#include "PrintedBook.cpp"
#include "AudioBook.cpp"

int main()
{
    vector<Author> authors;
    authors.push_back(Author("JK Rowling", "Inggris"));
    authors.push_back(Author("Dudul", "Bandung"));
    authors.push_back(Author("Jostein Gaarder", "Norwegia"));

    vector<Publisher> publishers;
    publishers.push_back(Publisher("Bloomsberry", "London"));
    publishers.push_back(Publisher("Gramedia", "Jakarta"));

    vector<PrintedBook> printedBooks;
    printedBooks.push_back(PrintedBook("Harry Potter 1", {authors[0], authors[1]}, publishers[0], "1023192031", 200, "Paperback"));
    printedBooks.push_back(PrintedBook("Harry Potter 2", {authors[0]}, publishers[0], "1023192032", 301, "Hardcover"));

    vector<AudioBook> audioBooks;
    audioBooks.push_back(AudioBook("Dunia Shopie", {authors[2]}, publishers[1], "1023192041", 10, "MP4", "PlayboiCarti", 120));
    audioBooks.push_back(AudioBook("The Puppeters", {authors[2]}, publishers[1], "1023192042", 12, "MKV", "PlayboiCarti", 150));

    // print printedBooks
    cout << "Data Buku Cetak" << endl;
    int count = 1;
    for (auto &book : printedBooks)
    {
        cout << count++ << ".) " << book.getTitle() << " | ";

        // kelas author
        cout << "(";
        for (int i = 0; i < book.getAuthor().size(); i++)
        {
            cout << book.getAuthor()[i].getName() << " - "<< book.getAuthor()[i].getNationality();

            if (i < book.getAuthor().size() - 1)
            {
                cout << ", ";
            }
        }
        cout << ") | ";

        // kelas publisher
        cout << book.getPublisher().getName() << " | ";
        cout << book.getPublisher().getAddress() << " | ";

        cout << book.getISBN() << " | ";
        cout << book.getPageCount() << " halaman | ";
        cout << book.getCoverType() << endl;
    }

    // print audioBooks
    cout << endl
         << "Data Audio Books" << endl;
    count = 1;
    for (auto &book : audioBooks)
    {
        cout << count++ << ".) " << book.getTitle() << " | ";

        // kelas author
        for (auto &author : book.getAuthor())
        { // Iterasi vektor Author
            cout << author.getName() << " | ";
            cout << author.getNationality() << " | ";
        }

        // kelas publisher
        cout << book.getPublisher().getName() << " | ";
        cout << book.getPublisher().getAddress() << " | ";

        cout << book.getSpeaker() << " | ";
        cout << book.getDuration() << " menit | ";

        cout << book.getISBN() << " | ";
        cout << book.getFileSize() << " mb | ";
        cout << book.getFormat() << endl;
    }

    return 0;
}