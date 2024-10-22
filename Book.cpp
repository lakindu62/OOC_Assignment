//
// Created by Lakindu on 2024-10-22.
//

#include "Book.h"
#include <iostream>

Book::Book(std::string bID, std::string t, double p, std::string g, int sL , Author *a, Publisher *pub) {
    book_id = std::move(bID);
    title = std::move(t);
    price = p;
    genre = std::move(g);
    stockLevel = sL;
    author = a;
    publisher = pub;


}

Book::Book(std::string bID, std::string t, double p, std::string g, int sL, std::string authorN, std::string publisherN) {
    book_id = std::move(bID);
    title = std::move(t);
    price = p;
    genre = std::move(g);
    stockLevel = sL;
    authorName = std::move(authorN);
    publisherName = std::move(publisherN);
}

void Book::getDetails(){
    std::cout << "Book ID: " << book_id << std::endl;
    std::cout << "Title: " << title << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Stock Level: " << stockLevel << std::endl;
    std::cout << "Genre: " << genre << std::endl;
    std::cout << "Author: " << author->getName() << std::endl;
    std::cout << "Publisher: " << publisher->getName() << std::endl;
}


void Book::updateStockLevel(int quantity) {
    if (stockLevel + quantity < 0) {
        stockLevel = 0;
        return;
    }
    stockLevel += quantity;
}


