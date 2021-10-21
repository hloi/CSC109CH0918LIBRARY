//
// Created by hloi on 10/21/2021.
//

#ifndef CSC109CH0918LIBRARY_BOOK_H
#define CSC109CH0918LIBRARY_BOOK_H


#include <string>
using namespace std;

class Book{
public:
    Book();

    Book(string userBookTitle, string userBookAuthor, long long userBookISBN);

    long long GetBookISBN() const;

    void PrintInfo() const;

private:
    string bookTitle;
    string bookAuthor;
    long long bookISBN;
};


#endif //CSC109CH0918LIBRARY_BOOK_H
