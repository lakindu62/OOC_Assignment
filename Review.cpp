//
// Created by Lakindu on 2024-10-23.
//

#include "Review.h"


using namespace std;
#include "Review.h"
#include <string>
#include <utility>

Review::Review(int rating, std::string comment, Book *book , Customer *customer) {
    this->rating = rating;
    this->comment = std::move(comment);
    this->book = book;
    this->customer = customer;

    cout << "Review created" << endl;
}

void Review::displayReview() {
    cout << "Rating: " << rating << endl;
    cout << "Comment: " << comment << endl;
    cout << "Book: " << book->getName() << endl;
    cout << "Customer: " << customer->getName() << endl;
}




void Review::updateReview(int Brating, std::string Bcomment, Book *b){
     rating = Brating;
    comment = Bcomment;
    book = b;

    cout << "Review updated" << endl;
}

