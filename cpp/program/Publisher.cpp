#pragma once
#include <bits/stdc++.h>

using namespace std;

// kelas publisher
class Publisher
{
private:
    // atribut-atribut private
    string name;
    string address;

public:
    // konstruktor kosong
    Publisher()
    {
    }

    // konstruktor dengan parameter untuk mengisi atribut
    Publisher(string name, string address)
    {
        this->name = name;
        this->address = address;
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

    // setter address
    void setAddress(int address)
    {
        this->address = address;
    }

    // getter address
    string getAddress()
    {
        return address;
    }

    ~Publisher()
    {
    }
};