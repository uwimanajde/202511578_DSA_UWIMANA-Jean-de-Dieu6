#ifndef LIBRARYBOOK_H
#define LIBRARYBOOK_H

#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
private:
    int bookID;
    string title;
    string author;
    string borrowerName;
    int daysBorrowed;
    bool borrowed;

public:
    LibraryBook();
    LibraryBook(int, string, string);

    ~LibraryBook();

    void setBookID(int);
    void setTitle(string);
    void setAuthor(string);
    void setBorrowerName(string);
    void setDaysBorrowed(int);
    void setBorrowed(bool);

    int getBookID();
    string getTitle();
    string getAuthor();
    string getBorrowerName();
    int getDaysBorrowed();
    bool getBorrowed();

    void borrowBook(string, int);
    void returnBook();
    double calculateFine();
    void displayBook();
};

#endif
