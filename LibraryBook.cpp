#include "LibraryBook.h"

LibraryBook::LibraryBook() {
    bookID = 0;
    title = "";
    author = "";
    borrowerName = "";
    daysBorrowed = 0;
    borrowed = false;
}

LibraryBook::LibraryBook(int id, string t, string a) {
    bookID = id;
    title = t;
    author = a;
    borrowerName = "";
    daysBorrowed = 0;
    borrowed = false;
}

LibraryBook::~LibraryBook() {
    cout << "Book Object Destroyed: " << title << endl;
}

void LibraryBook::setBookID(int id) {
    bookID = id;
}

void LibraryBook::setTitle(string t) {
    title = t;
}

void LibraryBook::setAuthor(string a) {
    author = a;
}

void LibraryBook::setBorrowerName(string name) {
    borrowerName = name;
}

void LibraryBook::setDaysBorrowed(int days) {
    daysBorrowed = days;
}

void LibraryBook::setBorrowed(bool status) {
    borrowed = status;
}

int LibraryBook::getBookID() {
    return bookID;
}

string LibraryBook::getTitle() {
    return title;
}

string LibraryBook::getAuthor() {
    return author;
}

string LibraryBook::getBorrowerName() {
    return borrowerName;
}

int LibraryBook::getDaysBorrowed() {
    return daysBorrowed;
}

bool LibraryBook::getBorrowed() {
    return borrowed;
}

void LibraryBook::borrowBook(string name, int days) {
    borrowerName = name;
    daysBorrowed = days;
    borrowed = true;
}

void LibraryBook::returnBook() {
    borrowerName = "";
    daysBorrowed = 0;
    borrowed = false;
}

double LibraryBook::calculateFine() {
    if (daysBorrowed > 14)
        return (daysBorrowed - 14) * 100;
    return 0;
}

void LibraryBook::displayBook() {
    cout << "\nBook ID: " << bookID
         << "\nTitle: " << title
         << "\nAuthor: " << author
         << "\nBorrowed: " << (borrowed ? "Yes" : "No")
         << endl;
}
