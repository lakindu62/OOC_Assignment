//
// Created by Lakindu on 2024-10-22.
//

#ifndef ASSIGNMENT_ADMIN_H
#define ASSIGNMENT_ADMIN_H


#include "Book.h"

class Admin : public User {




public:
    Admin(int uID, std::string u, std::string e, std::string p);
    void addBook();
    void removeBook();
    void updateBookStock(Book& book, int quantity);

};




#endif //ASSIGNMENT_ADMIN_H
