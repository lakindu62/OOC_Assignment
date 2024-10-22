//
// Created by Lakindu on 2024-10-23.
//

#ifndef ASSIGNMENT_REVIEW_H
#define ASSIGNMENT_REVIEW_H


#include <iostream>
#include "Book.h"
#include <string>


#define SIZE 5;


class Review {

    int rating;
    std::string comment;
    Book *book;

public:
    Review(int rating, std::string comment, Book *book);
    void updateReview(int Brating, std::string Bcomment, Book *b);
};


#endif //ASSIGNMENT_REVIEW_H
