//
// Created by hloi on 10/21/2021.
//

#ifndef CSC109CH0918LIBRARY_LINKEDLISTLIBRARY_H
#define CSC109CH0918LIBRARY_LINKEDLISTLIBRARY_H


#include "BookNode.h"
using namespace std;

class LinkedListLibrary {
public:
    //Linked list nodes
    BookNode* headNode;
    BookNode* lastNode;

    LinkedListLibrary();

    ~LinkedListLibrary();

    int InsertSorted(BookNode* newNode, int counter);

    void PrintLibrary() const;
};


#endif //CSC109CH0918LIBRARY_LINKEDLISTLIBRARY_H
