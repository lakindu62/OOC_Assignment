//
// Created by Lakindu on 2024-10-22.
//

#ifndef ASSIGNMENT_PUBLISHER_H
#define ASSIGNMENT_PUBLISHER_H
#include "User.h"
#define MAX_BOOKS 10

class Book; // Forward Declaration   -- Avoid Circular Dependency

class Publisher : public User {
    std::string contact;
    Book *books[MAX_BOOKS];

public:
    Publisher(int uID, std::string u, std::string e, std::string p, std::string contactI );
    void addBook(Book& book);
    void displayBooks();

};



#endif //ASSIGNMENT_PUBLISHER_H
