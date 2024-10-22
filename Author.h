//
// Created by Lakindu on 2024-10-22.
//

#ifndef ASSIGNMENT_AUTHOR_H
#define ASSIGNMENT_AUTHOR_H
#define MAX_BOOKS 10

#include "User.h"
#include <string>


class Book; // Forward Declaration   -- Avoid Circular Dependency


class Author: public User {
    std::string biography;
    Book *books[MAX_BOOKS];

public:

    Author(int uID, std::string u, std::string e, std::string p, std::string biographyI );
    void addBook(Book& book);
    void displayBooks();

};


#endif //ASSIGNMENT_AUTHOR_H
