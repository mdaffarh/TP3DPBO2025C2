#pragma once
#include <bits/stdc++.h>

using namespace std;

// kelas author
class Author
{
private:
    // atribut-atribut private
    string name;
    string nationality;

public:
    // konstruktor kosong
    Author()
    {
    }

    // konstruktor dengan parameter untuk mengisi atribut
    Author(string name, string nationality)
    {
        this->name = name;
        this->nationality = nationality;
    }

    // setter name
    void setName(string name)
    {
        this->name = name;
    }

    // getter name
    string getName()
    {
        return name;
    }

    // setter nationality
    void setNationality(int nationality)
    {
        this->nationality = nationality;
    }

    // getter nationality
    string getNationality()
    {
        return nationality;
    }

    ~Author()
    {
    }
};