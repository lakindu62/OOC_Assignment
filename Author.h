//
// Created by Lakindu on 2024-10-22.
//

#ifndef ASSIGNMENT_AUTHOR_H
#define ASSIGNMENT_AUTHOR_H


#include "User.h"
#include <string>

class Author: public User {
    std::string biography;
public:
    Author(int uID, std::string u, std::string e, std::string p, std::string biographyI );
};


#endif //ASSIGNMENT_AUTHOR_H
