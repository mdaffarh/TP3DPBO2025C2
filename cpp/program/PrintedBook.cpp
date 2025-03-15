#include <bits/stdc++.h>
#include "Book.cpp"

using namespace std;

// kelas book
class PrintedBook : public Book
{
private:
    // atribut-atribut private
    int pageCount;
    string coverType;

public:
    // konstruktor kosong
    PrintedBook()
    {
    }

    // konstruktor dengan parameter untuk mengisi atribut
    PrintedBook(string title, vector<Author> authorList, Publisher publisher, string ISBN, int pageCount, string coverType) : Book(title, authorList, publisher, ISBN)
    {
        this->pageCount = pageCount;
        this->coverType = coverType;
    }

    // setter pageCount
    void setPageCount(int pageCount)
    {
        this->pageCount = pageCount;
    }

    // getter pageCount
    int getPageCount()
    {
        return pageCount;
    }

    // setter coverType
    void setCoverType(string coverType)
    {
        this->coverType = coverType;
    }

    // getter coverType
    string getCoverType()
    {
        return coverType;
    }

    ~PrintedBook()
    {
    }
};