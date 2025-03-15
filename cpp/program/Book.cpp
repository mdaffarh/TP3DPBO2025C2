#pragma once
#include <bits/stdc++.h>
#include "Author.cpp"
#include "Publisher.cpp"

using namespace std;

// kelas book
class Book
{
private:
    // atribut-atribut private
    string title;
    vector<Author> authorList;
    Publisher publisher;
    string ISBN;

public:
    // konstruktor kosong
    Book()
    {
    }

    // konstruktor dengan parameter untuk mengisi atribut
    Book(string title, vector<Author> authorList, Publisher publisher, string ISBN)
    {
        this->title = title;
        this->authorList = authorList;
        this->publisher = publisher;
        this->ISBN = ISBN;
    }

    // setter title
    void setTitle(string title)
    {
        this->title = title;
    }

    // getter title
    string getTitle()
    {
        return title;
    }

    // setter authorList
    void setAuthor(vector<Author> authorList)
    {
        this->authorList = authorList;
    }

    // getter authorList
    vector<Author> getAuthor()
    {
        return authorList;
    }

    // setter publisher
    void setPublisher(Publisher publisher)
    {
        this->publisher = publisher;
    }

    // getter publisher
    Publisher getPublisher()
    {
        return publisher;
    }

    // setter ISBN
    void setISBN(string ISBN)
    {
        this->ISBN = ISBN;
    }

    // getter ISBN
    string getISBN()
    {
        return ISBN;
    }

    ~Book()
    {
    }
};