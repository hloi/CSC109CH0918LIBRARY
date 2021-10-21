//
// Created by hloi on 10/21/2021.
//

#ifndef CSC109CH0918LIBRARY_BOOKNODE_H
#define CSC109CH0918LIBRARY_BOOKNODE_H


#include <string>
using namespace std;

class BookNode {
public:
    BookNode();

    // Constructor
    BookNode(string bookTitleInit, string bookAuthorInit, long long bookISBNInit);

    // Constructor
    BookNode(string bookTitleInit, string bookAuthorInit, long long bookISBNInit, BookNode* nextLoc);

    // inserAfter
    void insertAfter(BookNode* nodeLoc);

    //setNext
    void SetNext(BookNode* nodeLoc);

    // Get location pointed by nextNodePtr
    BookNode* GetNext() const;

    long long GetBookISBN() const;

    // Print book information
    void PrintBookInfo() const;

private:
    string bookTitle;
    string bookAuthor;
    long long bookISBN;
    BookNode* nextNodePtr; // Reference to the next node
};

#endif //CSC109CH0918LIBRARY_BOOKNODE_H
