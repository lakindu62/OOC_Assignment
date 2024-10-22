//
// Created by Lakindu on 2024-10-22.
//

#include "Admin.h"
#include <iostream>
#include "Author.h"
#include "Publisher.h"
#include "Book.h"
#include "User.h"

Admin::Admin(int uID, std::string u, std::string e, std::string p) : User(uID, u, e, p) {}

void Admin::addBook() {
    std::string book_id;
    std::string title;
    double price;
    std::string genre;
    int stockLevel;
    std::string authorN;
    std::string publisherN;

    std::cout << "Enter Book ID: ";
    std::cin >> book_id;
    std::cout << "Enter Title: ";
    std::cin >> title;
    std::cout << "Enter Price: ";
    std::cin >> price;
    std::cout << "Enter Genre: ";
    std::cin >> genre;
    std::cout << "Enter Stock Level: ";
    std::cin >> stockLevel;
    std::cout << "Enter Author Name: ";
    std::cin >> authorN;
    std::cout << "Enter Publisher Name: ";
    std::cin >> authorN;



    Book *book = new Book(book_id, title, price, genre, stockLevel, authorN, authorN);
    std::cout << "Book Added Successfully!" << std::endl;
    book->getDetails();
}

void Admin::removeBook() {
    std::string book_id;
    std::cout << "Enter Book ID: ";
    std::cin >> book_id;
    std::cout << "Book Removed Successfully!" << std::endl;
}

 void Admin::updateBookStock(Book& book, int quantity) {
    book.updateStockLevel(quantity);
    std::cout << "Stock Level Updated Successfully!" << std::endl;
    book.getDetails();
}

