//
// Created by Lakindu on 2024-10-22.
//

#include "Author.h"
#include <iostream>
#include "Book.h"



Author::Author(int uID, std::string u, std::string e, std::string p, std::string biographyI ):User(uID, u, e, p){
    biography = biographyI;
}

void Author::addBook(Book& book) {
    for (int i = 0; i < MAX_BOOKS; i++) {
        if (books[i] == nullptr) {
            books[i] = &book;
            std::cout << "Book added to Author's Books" << std::endl;
            return;
        }
    }
    std::cout << "Book Limit Reached!" << std::endl;
}


void Author::displayBooks() {
    for (int i = 0; i < MAX_BOOKS; i++) {
        if (books[i] != nullptr) {
            books[i]->getDetails();
            std::cout << "-------------------" << std::endl;
        }
    }
}
