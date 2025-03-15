#include <bits/stdc++.h>
#include "Book.cpp"
#include "VoiceRecording.cpp"

using namespace std;

// kelas book
class AudioBook : public Book, public VoiceRecording
{
private:
    // atribut-atribut private
    int fileSize;
    string format;

public:
    // konstruktor kosong
    AudioBook()
    {
    }

    // konstruktor dengan parameter untuk mengisi atribut
    AudioBook(string title, vector<Author> authorList, Publisher publisher, string ISBN, int fileSize, string format, string speaker, int duration) : Book(title, authorList, publisher, ISBN), VoiceRecording(speaker, duration)
    {
        this->fileSize = fileSize;
        this->format = format;
    }

    // setter fileSize
    void setFileSize(int fileSize)
    {
        this->fileSize = fileSize;
    }

    // getter fileSize
    int getFileSize()
    {
        return fileSize;
    }

    // setter format
    void setFormat(string format)
    {
        this->format = format;
    }

    // getter format
    string getFormat()
    {
        return format;
    }

    ~AudioBook()
    {
    }
};