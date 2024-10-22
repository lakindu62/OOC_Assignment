//
// Created by Lakindu on 2024-10-22.
//

#ifndef ASSIGNMENT_BOOK_H
#define ASSIGNMENT_BOOK_H
#include <string>
#include "Author.h"
#include "Publisher.h"


class Book {
private:
    std::string book_id;
    std::string title;
    double price;
    std::string genre;
    int stockLevel;
    std::string authorName; //unregistered Author
    std::string publisherName; //unregistered Publisher

    Author *author{};
    Publisher *publisher{};

public:
    Book(std::string bID, std::string t, double p, std::string g, int sL , Author *a, Publisher *pub);
    Book(std::string bID, std::string t, double p, std::string g, int sL, std::string authorN, std::string publisherN);
    void getDetails();
    void updateStockLevel(int quantity);
};


#endif //ASSIGNMENT_BOOK_H
