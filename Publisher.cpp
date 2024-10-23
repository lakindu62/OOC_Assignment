//
// Created by Lakindu on 2024-10-22.
//

#include "Publisher.h"
#include <iostream>
#include "Book.h"


Publisher::Publisher(int uID, std::string u, std::string e, std::string p, std::string contactI ):User(uID, u, e, p){
    contact = std::move(contactI);
}

void Publisher::addBook(Book &book) {
    for (int i = 0; i < MAX_BOOKS; i++) {
        if (books[i] == nullptr) {
            books[i] = &book;
            std::cout << "Book Added to publisher's books " << std::endl;
            return;
        }
    }
    std::cout << "Book Limit Reached!" << std::endl;
}

void Publisher::displayBooks() {
    for (int i = 0; i < MAX_BOOKS; i++) {
        if (books[i] != nullptr) {
            books[i]->getDetails();
            std::cout << "-------------------" << std::endl;
        }
    }
}

