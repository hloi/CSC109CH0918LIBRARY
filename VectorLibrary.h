//
// Created by hloi on 10/21/2021.
//

#ifndef CSC109CH0918LIBRARY_VECTORLIBRARY_H
#define CSC109CH0918LIBRARY_VECTORLIBRARY_H


#include "Book.h"
#include <vector>
using namespace std;

class VectorLibrary {
public:
    VectorLibrary();

    int InsertSorted(const Book &newBook, int counter);

    void PrintLibrary() const;

private:
    // vector library
    vector<Book> library;

};

#endif //CSC109CH0918LIBRARY_VECTORLIBRARY_H
