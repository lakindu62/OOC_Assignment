//
// Created by Lakindu on 2024-10-23.
//

#include "Review.h"


using namespace std;
#include "Review.h"
#include <string>

Review::Review(int rating, std::string comment, Book *book) {
    this->rating = rating;
    this->comment = comment;
    this->book = book;

    cout << "Review created" << endl;
}


void Review::updateReview(int Brating, std::string Bcomment, Book *b){
     rating = Brating;
    comment = Bcomment;
    book = b;

    cout << "Review updated" << endl;
}

